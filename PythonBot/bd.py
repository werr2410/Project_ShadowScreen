import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  password="Notna2006",
  database="tgbot"
)

mycursor = mydb.cursor()

""" mycursor.execute("SHOW DATABASES")

for x in mycursor:
  print(x) """
""" mycursor.execute("CREATE TABLE Adress ("
	" AdressId		int identity(1,1)	not null,"
	" Country		nvarchar(30)			null,"
	" Town			nvarchar(30)		not null,"
	" Street		nvarchar(30)		not null,"
	" NumberHouse	nvarchar(30)		not null,"

	" constraint PK_Adress_AdressId primary key	(AdressId),"

	" constraint CK_Adress_Town		 check		(len(Town) > 2),"
	" constraint CK_Adress_Street		 check		(len(Street) > 2),"
	" constraint CK_Adress_Numberphone check		(len(NumberHouse) >= 1)"
) """
mycursor.execute("CREATE TABLE customers (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), address VARCHAR(255))")
