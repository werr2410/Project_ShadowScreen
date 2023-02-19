Приложение для Продажи или покупки комплектующих. Оно автоматически определяет какие копмлектующие стоят в компьюетере. 

Реализованные классы:

  ![image](https://user-images.githubusercontent.com/123190998/219900336-2604dc42-44c5-4529-b949-b1213e8b8f81.png)

Class Adress:
  этот класс хранит в себе 4 поля для хранения адресса(страна, город, улица, номер дома).
  
  QString country - private
  QString town    - private
  QString street  -  private
  QString number  - private
  
  Конструкторы:
    Adress(QString country, QString town, QString street, QString number)
    Adress(QString town, QString street, QString number) -> country = NULL
    Adress(QString town, QString street) -> country = NULL, number = NULL
    Adress() -> country  = NULL, town = NULL, street = NULL, number = NULL
    
  Аксессоры:
    void setCountry(QString country)
    void setTown(QString town)
    void setStreet(QString street)
    void setNumber(QString number)
    
    QString getCountry() const
    QString getTown() const
    QString getStreet() const
    QString getNumber() const
    
  Остальные:
    void getFullAdress(QString& str) const - в качестве аргумента QString по ссылке вводиться                                                   и результат функции возращяеться в нее
    QString getFullAdress() const - возращяет полный адресс
    void getAdress(QString& country, QString& town, QString& street, QString& number) const;
