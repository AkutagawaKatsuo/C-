//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//ʵ������Ԫ������
//
//	//1.��������
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "��������ǰ˳�� ";
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	//2.ʵ������
//	//2.1��¼��ʼ�±�λ��
//	//2.2��¼�����±�λ��
//	//2.3��ʼ�±�������±���л���
//	//2.4��ʼ�±�++ �� �����±�--
//	//2.5ִ��ѭ��2.1����ֱ����ʼλ�� >= ����λ��
//
//	int start = 0;//������ʼ�±�
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;//���������±�
//
//	while (start < end)
//	{
//		//ʵ��Ԫ�ػ���
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//
//		//�±����
//		start++;
//		end--;
//	}
//
//	//3.��ӡ���ý��
//	cout << "�������ú�˳�� ";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}