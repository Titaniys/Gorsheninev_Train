#pragma once
/**
    @file      Gorsheninev_Class_Train.h
	@brief     Заголовочный файл класса Train
	@copyright ВоГУ
	@author    Горшенин Ефим Валентинович
	@date      29-05-2024
	@version   1.0.0
\par Использует классы:
    @ref Gorsheninev_Class_Train
\par Содержит класс:
    @ref Gorsheninev_Class_Train
*/

/// Класс описания персоны
/** Содержит данные персоны и методы для работы с ними
*/

class Gorsheninev_Class_Train
{
protected:
	char* _The_destination;   ///< Пункт назначения
	int _Train_number;        ///< Номер поезда
	int _Departure_time;      ///< Время отправления
	int _Number_of_common_places;   ///< Число общих мест
	int _Compartment;         ///< Купейных
	int _Reserved_seats;      ///< Плацкартных
public:
	/// Конструктор по умолчанию
	/** Создает персону без инициализации полей
	*/
	Gorsheninev_Class_Train(void);

	/// Конструктор по умолчанию
    /** Создает персону без инициализации полей
	\param The_destination Пункт назначения
	\param Train_number Номер поезда
	\param Departure_time Время отправления
	\param Number_of_common_places Число общих мест
	\param Compartment Купейных
	\param Reserved_seats Плацкартных
	*/
	Gorsheninev_Class_Train(char* _The_destination, int _Train_number, int _Departure_time, int _Number_of_common_places, int _Compartment, int _Reserved_seats);
	
	/// Деструктор освобождает ресурсы
	~Gorsheninev_Class_Train(void);

	/** \brief Возвращает полную информацию о список поездов, следующих до заданного пункта назначения
	@param The_destination Пункт назначения
	@return строку с данными о персоне в формате (Пункт назначения, Номер поезда, Время отправления, Число общих мест, Купейных, Плацкартных)
	*/
	char* train_list_from_destinatio(char* _The_destination);

	/** \brief Возвращает полную информацию о список поездов, следующих до заданного пункта назначения и отправляющихся после заданного часа
	@param The_destination Пункт назначения
	@param Departure_time Время отправления
	@return строку с данными о персоне в формате (Пункт назначения, Номер поезда, Время отправления, Число общих мест, Купейных, Плацкартных)
	*/
	char* train_list_from_destinatio_departure_time(char* _The_destination, int _Departure_time);

	/** \brief Возвращает полную информацию список поездов, отправляющихся до заданного пункта назначения и имеющих общие места
	@param The_destination Пункт назначения
	@param Number_of_common_places Число общих мест
	@return строку с данными о персоне в формате (Пункт назначения, Номер поезда, Время отправления, Число общих мест, Купейных, Плацкартных)
	*/
	char* train_list_from_destinatio_number_of_common_places(char* _The_destination, int _Number_of_common_places);
}