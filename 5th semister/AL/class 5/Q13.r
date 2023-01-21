inv <- data.frame(
  "SN"    = c(1:16),
  "CATEGORY" = c("Clothing","Clothing","Clothing","Clothing",
                 "Cosmatics","Cosmatics","Cosmatics","Cosmatics",
                 "Stationary","Stationary","Stationary","Stationary",
                 "Grocery","Grocery","Grocery","Grocery"),
  "NAME"  = c("Shirt","Jeans","Top","Shoes",
              "Face Wash","Perfume","Talc","Deo",
              "Note Book","Pen","Pencil","Book",
              "Dal","Rice","Sugar","Tea"),
  "QUANTITY" = c(20,25,10,20,
                 23,45,12,34,
                 12,34,10,29,
                 50,23,16,19),
  "PRICE" = c(1000,2000,700,3000,
              100,500,80,120,
              30,10,5,50,
              90,35,40,250),
  stringsAsFactors = FALSE
)
print(inv)
print(paste("Total Inventory Price: ",sum(inv$QUANTITY * inv$PRICE)))
y = readline("Enter product to update: ")
z = as.integer(readline("Enter new data: "))
x = (which(inv == y, arr.ind = TRUE))
inv[x[1],4] = z
print(inv)
print(paste("New Total Inventory Price: ",sum(inv$QUANTITY * inv$PRICE)))