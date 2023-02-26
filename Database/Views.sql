use ShadowScreen

-- Adress
go
create view SmallAdress(Town, Street, Number) as
	select Town, Street, NumberHouse as Number
	from Adress

go create view SmallStringAdress(adress) as
	select (Town + ' ' + Street + ' ' + NumberHouse) as adress
	from Adress

go create view StringAdress(adress) as
	select (Country + ' ' + Town + ' ' + Street + ' ' + NumberHouse) as adress
	from Adress

go create view CountAdress(amount) as
	select count(*) as amount
	from Adress

-- Delivery

go create view DeliveryNovaPoshta(title, adressId) as
	select title, AdressId
	from Delivery
	where Delivery.Type = 'n'

go create view DeliveryUkrPoshta(title, AdressId) as
	select title, AdressId 
	from Delivery
	where Type = 'u'

go create view DeliveryMeest(title, AdressId) as
	select title, AdressId
	from Delivery
	where Type = 'm'

go create view DeliveryCount(amount) as
	select count(*) as amount
	from Delivery

-- BankCard

go create view BankcardCount(amount) as
	select count(*) as amount
	from Bankcard

go create view getBankCardOnly(Number, [Date]) as
	select Number, ExpirationDate as [Date]
	from Bankcard

-- Reviews

go create view ReviewsCount(amount) as 
	select count(*) as amount
	from Reviews

go create view ReviewsBad(ReviewsId, [Description], Mark) as
	select ReviewsId, [Description], Mark
	from Reviews
	where Mark between 0 and 3

go create view ReviewsGood(ReviewsId, [Description], Mark) as
	select ReviewsId, [Description], Mark
	from Reviews
	where Mark between 4 and 7

go create view ReviewsGreat(ReviewsId, [Description], Mark) as
	select ReviewsId, [Description], Mark 
	from Reviews
	where Mark between 8 and 10

-- CPU
go create view CPUCount(amount)as
	select count(*) as [amount]
	from CPU

-- GPU

go create view GPUCount(amount) as
	select count(*) as [amount]
	from GPU

-- Baseboard

go create view BaseboardCount(amount) as
	select count(*) as [amount]
	from Baseboard

-- Memorychip

go create view MemorychipCount(amount) as
	select COUNT(*) as [amount]  
	from Memorychip

-- Storage

go create view StorageCount(amount) as
	select count(*) as [amount]
	from Storage