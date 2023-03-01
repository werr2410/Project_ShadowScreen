use ShadowScreen

create table [Adress] (
	[AdressId]		int identity(1,1)	not null,
	
	[Country]		nvarchar(30)			null,
	[Town]			nvarchar(30)		not null,
	[Street]		nvarchar(30)		not null,
	[NumberHouse]	nvarchar(30)		not null,

	constraint PK_Adress_AdressId primary key	(AdressId),

	constraint CK_Adress_Town		 check		(len(Town) > 2),
	constraint CK_Adress_Street		 check		(len(Street) > 2),
	constraint CK_Adress_Numberphone check		(len(NumberHouse) >= 1)
)

create table [Bankcard] (
	[BankcardId]		int identity(1,1)	not null,
	[Title]				nvarchar(20)			null,
	[Number]			nvarchar(16)		not null,
	[ExpirationDate]	date					null,

	constraint PK_Bankcard_BankcardId primary key(BankcardId),

	constraint CK_BankCard_Number check(len(Number) = 16),
	constraint UQ_BankCard_Number unique(Number)
)

create table [Reviews] (
	[ReviewsId]		int identity(1,1)	not null,
	[Description]	nvarchar(300)			null,
	[Mark]			int					not null,

	constraint PK_Reviews_ReviewsId primary key(ReviewsId),
	constraint CK_Reviews_Mark check(Mark between 1 and 10)
)

create table [Delivery] (
	[DeliveryId]	int identity(1,1)	not null,
	[Title]			nvarchar(20)			null,
	[Type]			nvarchar(1)			not null,
	[AdressId]		int						null,

	constraint PK_Delivery_DeliveryId	primary key(DeliveryId),

	constraint FK_Delivery_Adress		foreign key(AdressId) references Adress(AdressId)
										on delete cascade on update no action
)

create table [Baseboard] (
	[BaseboardId]	int identity(1,1)	not null,
	[Manufacturer]	nvarchar(100)		not null,
	[Product]		nvarchar(100)		not null,
	[Description]	nvarchar(200)			null constraint DF_Baseboard_Description default 'no data',
	[IsSale]		bit						null constraint DF_Baseboard_IsSale		 default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_Baseboard_Stars		 default 0,
	[Status]		nvarchar(30)			null constraint DF_Baseboard_Status		 default 'OK',
	
	constraint FK_Baseboard_BaseboardId	primary key(BaseboardId)	
)

create table [Memorychip] (
	[MemorychipId]	int identity not null,
	[Manufacturer]	nvarchar(300) not null,
	[Capacity]		nvarchar(300) not null,
	[Description]	nvarchar(200)			null constraint DF_Memorychip_Description	default 'no data',
	[IsSale]		bit						null constraint DF_Memorychip_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_Memorychip_Stars			default 0,
	[Status]		nvarchar(30)			null constraint DF_Memorychip_Status		default 'OK',

	constraint FK_Memorychip_MemorychipId primary key(MemorychipId)
)

create table [CPU] (
	[CPUId]			int identity(1,1)	not null,
	[Manufacturer]	nvarchar(100)		not null,
	[Name]			nvarchar(100)		not null,
	[Description]	nvarchar(200)			null constraint DF_CPU_Description	default 'no data',
	[IsSale]		bit						null constraint DF_CPU_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_CPU_Stars		default 0,
	[Status]		nvarchar(30)			null constraint DF_CPU_Status		default 'OK',

	constraint FK_CPU_CPUId primary key(CPUId)
)

create table [GPU] (
	[GPUId]			int identity(1,1)	not null,
	[Manufacturer]	nvarchar(200)		not null,
	[Description]	nvarchar(200)			null constraint DF_GPU_Description	default 'no data',
	[IsSale]		bit						null constraint DF_GPU_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_GPU_Stars		default 0,
	[Status]		nvarchar(30)			null constraint DF_GPU_Status		default 'OK',

	constraint FK_GPU_GPUId primary key(GPUId)
)

create table [Storage] (
	[StorageId]		int identity(1,1)	not null,
	[Manufacturer]	nvarchar(400)		not null,
	[Model]			nvarchar(400)		not null,
	[Size]			nvarchar(200)		not null,
	[Description]	nvarchar(200)			null constraint DF_Storage_Description	default 'no data',
	[IsSale]		bit						null constraint DF_Storage_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_Storage_Stars		default 0,
	[Status]		nvarchar(30)			null constraint DF_Storage_Status		default 'OK',

	constraint FK_Storage_StorageId primary key(StorageId)
)

create table [Computer] (
	[ComputerId]	int identity(1,1)	not null,
	[Title]			nvarchar(50)			null,
	
	[CPUId]			int						null,
	[GPUId]			int						null,
	[StorageId]		int						null,
	[MemorychipId]	int						null,
	[BaseboardId]	int						null,

	constraint PK_Computer_ComputerId primary key(ComputerId),

	constraint FK_Computer_GPU			foreign key(GPUId) references GPU(GPUId)
												on delete cascade on update no action,

	constraint FK_Computer_CPU			foreign key(CPUId) references CPU(CPUId)
												on delete cascade on update no action,

	constraint FK_Computer_Storage		foreign key(StorageId) references Storage(StorageId)
												on delete cascade on update no action,

	constraint FK_Computer_Memorychip	foreign key(MemorychipId) references Memorychip(MemorychipId)
												on delete cascade on update no action,

	constraint FK_Computer_Baseboard	foreign key(BaseboardId) references Baseboard(BaseboardId)
												on delete cascade on update no action
)

create table [Chat] (
	[ChatId]			int identity(1,1)	not null,
	[UsernameSenderId]	int					not null,
	[UsernameOrderId]	int					not null,

	constraint FK_Chat_ChatId primary key(ChatId),

	constraint FK_Chat_User foreign key(UsernameSenderId) references [User](UserId)
							on delete no action on update no action,
	constraint FK_Chat_UserO foreign key(UsernameOrderId) references [User](UserId)
							on delete no action on update no action
)

create table [Message] (
	[MessageId]		int identity(1,1)	not null,

	[MessageData]	nvarchar(100)		not null,
	[Datetime]		datetime			not null	constraint DF_Message_DateTime default getdate(),
	[IsSender]		bit					not null,
	[IsViewed]		bit					not null	constraint DF_Message_IsViewed default 0,

	[ChatId]		int					not null,

	constraint PK_Message_MessageId primary key(MessageId),
	constraint FK_Message_Chat foreign key(ChatId) references Chat(ChatId)
								on delete no action on update no action
)

create table [Telegram] (
	[TelegramId]	int identity(1,1)	not null,
	[UserName]		nvarchar(40)		not null,
	[ChatId]		nvarchar(30)		not null,
	[Usercode]		nvarchar(30)			null,

	constraint FK_Telegram_TelegramId primary key(TelegramId),
	constraint UQ_Telegram_ChatId unique(UserName),
	constraint UQ_Telegram_Usercode unique(Usercode)
)

create table [FK_User_Reviews] (
	FKId int identity(1,1) not null,
	UserId int null,
	ReviewsId int null,

	constraint PK_UR_FKId primary key(FKId),

	constraint FK_UR_UserId foreign key(UserId) references [User](UserId)
							on delete cascade on update no action,
	constraint FK_UR_ReviewsId foreign key(ReviewsId) references [Reviews](ReviewsId)
							on delete cascade on update no action
)

create table [FK_User_Delivery] (
	FKId int identity(1,1) not null,

	UserId int null,
	DeliveryId int null,

	constraint PK_UD_FKId primary key(FKId),

	constraint FK_UD_UserId foreign key(UserId) references [User](UserId),
							--on delete cascade on update no action,
	constraint FK_UD_DeliveryId foreign key(DeliveryId) references Delivery(DeliveryId)
							--on delete cascade on update no action
)

create table [FK_User_Bankcard] (
	FKId int identity(1,1) not null,

	UserId int null,
	BankcardId int null,

	constraint PK_UB_FKId primary key(FKId),

	constraint FK_UB_UserId foreign key(UserId) references [User](UserId)
							on delete cascade on update no action,
	constraint FK_UB_BankcardId foreign key(BankcardId) references Bankcard(BankcardId)
							on delete cascade on update no action
)


create table [User] (
	[UserId]		int identity(1,1)	not null,
	[Username]		nvarchar(100)		not null,
	[Name]			nvarchar(40)		    null,
	[Surname]		nvarchar(40)		    null,
	[Middlename]	nvarchar(40)		    null,
	[Numberphone]	nvarchar(12)		    null,
	[Birthday]		date					null,
	[StartUse]		datetime				null,
	[HashCode]		nvarchar(100)			null,
	[Email]			nvarchar(41)		    null,
	[Passport]		nvarchar(40)		not null,
	[ComputerId]	int						null,
	[TelegramId]	int						null,
	[AdressId]		int						null,

	constraint PK_User_UserId primary key(UserId),
	
	constraint UQ_User_Username unique(Username),
	constraint UQ_User_Numberphone unique(Numberphone),
	constraint UQ_User_Email unique(Email),
	constraint UQ_User_Telegram unique(TelegramId),
	constraint UQ_User_HashCode unique(HashCode),

	constraint CK_User_Username check(len(Username) >= 2),
	constraint CK_User_Numberphone check(len(Numberphone) > 7),
	constraint CK_User_Email check(len(Email) >= 6),
	constraint CK_User_Passport check(len(Passport) > 4),

	constraint FK_User_Telegram foreign key(TelegramId) references Telegram(TelegramId)
								on delete cascade on update no action,
	constraint FK_User_Adress foreign key(AdressId) references Adress(AdressId)
								on delete cascade on update no action,
	constraint FK_User_Computer foreign key(ComputerId) references Computer(ComputerId)
								on delete cascade on update no action
)