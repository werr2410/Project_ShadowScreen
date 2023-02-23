use ShadowScreen

create table [Adress] (
	AdressId	int identity(1,1)	not null,
	
	Country		nvarchar(30)			null,
	Town		nvarchar(30)		not null,
	Street		nvarchar(30)		not null,
	NumberHouse nvarchar(30)		not null,

	constraint PK_Adress_AdressId primary key	(AdressId),

	constraint CK_Adress_Town		 check		(len(Town) > 2),
	constraint CK_Adress_Street		 check		(len(Street) > 2),
	constraint CK_Adress_Numberphone check		(len(NumberHouse) >= 1)
)

create table [Bankcard] (
	BankcardId	int identity(1,1)	not null,
	Title		nvarchar(20)		null,
	Number		nvarchar(16)		not null,
	ExpirationDate date				null,

	constraint PK_Bankcard_BankcardId primary key(BankcardId),

	constraint CK_BankCard_Number check(len(Number) = 16),
	constraint UQ_BankCard_Number unique(Number)
)

create table [Reviews] (
	ReviewsId		int identity(1,1)	not null,
	[Description]	nvarchar(300)			null,
	Mark			int					not null,

	constraint PK_Reviews_ReviewsId primary key(ReviewsId),
	constraint CK_Reviews_Mark check(Mark between 1 and 10)
)

create table [Delivery] (
	DeliveryId	int identity(1,1)	not null,
	Title		nvarchar(20)			null,
	[Type]		nvarchar(1)			not null,
	AdressId	int						null,

	constraint PK_Delivery_DeliveryId	primary key(DeliveryId),

	constraint FK_Delivery_Adress		foreign key(AdressId) references Adress(AdressId)
										on delete cascade on update no action
)
