#pragma once
/**
    @file      Gorsheninev_Class_Train.h
	@brief     ������������ ���� ������ Train
	@copyright ����
	@author    �������� ���� ������������
	@date      29-05-2024
	@version   1.0.0
\par ���������� ������:
    @ref Gorsheninev_Class_Train
\par �������� �����:
    @ref Gorsheninev_Class_Train
*/

/// ����� �������� �������
/** �������� ������ ������� � ������ ��� ������ � ����
*/

class Gorsheninev_Class_Train
{
protected:
	char* _The_destination;   ///< ����� ����������
	int _Train_number;        ///< ����� ������
	int _Departure_time;      ///< ����� �����������
	int _Number_of_common_places;   ///< ����� ����� ����
	int _Compartment;         ///< ��������
	int _Reserved_seats;      ///< �����������
public:
	/// ����������� �� ���������
	/** ������� ������� ��� ������������� �����
	*/
	Gorsheninev_Class_Train(void);

	/// ����������� �� ���������
    /** ������� ������� ��� ������������� �����
	\param The_destination ����� ����������
	\param Train_number ����� ������
	\param Departure_time ����� �����������
	\param Number_of_common_places ����� ����� ����
	\param Compartment ��������
	\param Reserved_seats �����������
	*/
	Gorsheninev_Class_Train(char* _The_destination, int _Train_number, int _Departure_time, int _Number_of_common_places, int _Compartment, int _Reserved_seats);
	
	/// ���������� ����������� �������
	~Gorsheninev_Class_Train(void);

	/** \brief ���������� ������ ���������� � ������ �������, ��������� �� ��������� ������ ����������
	@param The_destination ����� ����������
	@return ������ � ������� � ������� � ������� (����� ����������, ����� ������, ����� �����������, ����� ����� ����, ��������, �����������)
	*/
	char* train_list_from_destinatio(char* _The_destination);

	/** \brief ���������� ������ ���������� � ������ �������, ��������� �� ��������� ������ ���������� � �������������� ����� ��������� ����
	@param The_destination ����� ����������
	@param Departure_time ����� �����������
	@return ������ � ������� � ������� � ������� (����� ����������, ����� ������, ����� �����������, ����� ����� ����, ��������, �����������)
	*/
	char* train_list_from_destinatio_departure_time(char* _The_destination, int _Departure_time);

	/** \brief ���������� ������ ���������� ������ �������, �������������� �� ��������� ������ ���������� � ������� ����� �����
	@param The_destination ����� ����������
	@param Number_of_common_places ����� ����� ����
	@return ������ � ������� � ������� � ������� (����� ����������, ����� ������, ����� �����������, ����� ����� ����, ��������, �����������)
	*/
	char* train_list_from_destinatio_number_of_common_places(char* _The_destination, int _Number_of_common_places);
}