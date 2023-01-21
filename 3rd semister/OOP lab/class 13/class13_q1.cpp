/*1. Two files named ‘Source1’ and ‘Source2’ contains sorted list of integers . 
Write a program that reads the contents of both the files and stores the merged 
list in sorted form in a new file named ‘Target’*/


#include <iostream>
#include <iomanip> 
#include <fstream>
using namespace std;
void mergeFiles( ifstream& fin1, ifstream& fin2, ofstream& fout );
void showFile( const char* fname );

int main()
{
    ifstream fin1( "Source1.txt" );
    ifstream fin2( "Source2.txt" );
    ofstream fout( "Target.txt" );
    mergeFiles( fin1, fin2, fout );
    fout.close(); 
    showFile( "Source1.txt" );
    showFile( "Source2.txt" );
    showFile( "Target.txt" );
    return 0;
}

void mergeFiles( ifstream& fin1, ifstream& fin2, ofstream& fout )
{
    int i1, i2, countIn = 0, countOut = 0;
    if( fin1 >> i1 ) ++ countIn;
    if( fin1 ) 
    {
        if( fin2 >> i2 )
        {
            ++ countIn;
            while( fin1 && fin2 )
            {
                if( i1 <= i2 )
                {
                    fout << i1 << ' ';
                    ++countOut;
                    if( !(fin1 >> i1) )
                    {
                        fout << i2 << ' ';
                        ++countOut;
                    }
                    else ++countIn;
                }
                else
                {
                    fout << i2 << ' ';
                    ++countOut;
                    if( !(fin2 >> i2) )
                    {
                        fout << i1 << ' ';
                        ++countOut;
                    }
                    else ++countIn;
                }
            }
        }
        else
        {
            fout << i1 << ' ';  
            ++countOut;
        }
    }
    while( fin1 >> i1 ) { fout << i1 << ' '; ++countIn; ++countOut; }
    while( fin2 >> i2 ) { fout << i2 << ' '; ++countIn; ++countOut; }
}

void showFile( const char* fname )
{
    ifstream fin( fname );
    if( fin )
    {
        cout << "\nShowing numbers in file " << fname << " : ";
        int tmp;
        while( fin >> tmp ) cout << setw( 1 )<< tmp << ' ';
        fin.close();
        cout << endl;
    }
    else cout << "\nThere was a problem opening file " << fname << endl;
}