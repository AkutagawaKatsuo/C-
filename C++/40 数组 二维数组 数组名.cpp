//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//�鿴��ά������ռ���ڴ�ռ�
//	int arr[2][3]
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	cout << "��ά����ռ�õ��ڴ�ռ䣺 " << sizeof(arr) << endl;
//	cout << "��ά����һ��Ԫ��ռ���ڴ�ռ䣺 " << sizeof(arr[0]) << endl;
//	cout << "��ά����Ԫ��ռ���ڴ�ռ䣺 " << sizeof(arr[0][0]) << endl;
//	
//	cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//��ȡ��ά�����׵�ַ
//	cout << "��ά�����׵�ַ�� " << (int)arr << endl;
//	cout << "��ά�����һ�е�ַ�� " << (int)&arr[0] << endl;
//	cout << "��ά����ڶ��е�ַ�� " << (int)&arr[1] << endl;
//
//	cout << "��ά�����һ��Ԫ�ص�ַ�� " << (int)&arr[0] << endl;
//	cout << "��ά����ڶ���Ԫ�ص�ַ�� " << (int)&arr[0][1] << endl;
// 
//	system("pause");
//	return 0;
//}