//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score = 0;
//	cout << "��������Ӱ��֣�" << endl;
//	cin >> score;
//	cout << "����ķ����ǣ�" << score << endl;
//
//	switch (score)
//	{
//	case 10:
//		cout << "����Ϊ�����Ӱ�Ǿ���" << endl;
//		break;
//	case 9:
//		cout << "����Ϊ�����Ӱ�Ǿ���" << endl;
//		break;
//	case 8:
//		cout << "����Ϊ�����Ӱ�ǳ���" << endl;
//		break;
//	case 7:
//		cout << "����Ϊ�����Ӱ�ǳ���" << endl;
//		break;
//	case 6:
//		cout << "����Ϊ�����Ӱһ��" << endl;
//		break;
//	case 5:
//		cout << "����Ϊ�����Ӱһ��" << endl;
//		break;
//	default:
//		cout << "����Ϊ�����Ӱ����Ƭ" << endl;
//		break;
//	}
//
//	//switch��ȱ�㣺�ж�ʱֻ�������ͻ����ַ��ͣ���������һ������
//	//switch���ŵ㣺�ṹ������ִ��Ч�ʸ�
//
//	system("pause");
//	return 0;
//}
//
////�Ľ���Ĵ���
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// ���岢��ʼ����Ӱ���ֱ���
//	int score = 0;
//
//	// ��ʾ�û���������
//	cout << "��������Ӱ��֣�" << endl;
//	cin >> score;
//
//	// ��������Ƿ���Ч
//	if (cin.fail()) {
//		cout << "������Ч������������������" << endl;
//	}
//	/*fail() �� C++ ���������� cin���ĳ�Ա�����������ж���һ����������Ƿ�ʧ�ܡ�
//	���庬�壺
//	�����������������������Ͳ�ƥ�䣬������������������ʱ��fail() �᷵�� true��
//	���磬Ҫ�������������û�ȴ��������ĸ�������Ƿ��ַ���cin.fail() �ͻ�Ϊ�档*/
//
//	else {
//		cout << "����ķ����ǣ�" << score << endl;
//
//		// ���������������
//		switch (score)
//		{
//		case 10:
//		case 9:
//			cout << "����Ϊ�����Ӱ�Ǿ���" << endl;
//			break;
//		case 8:
//		case 7:
//			cout << "����Ϊ�����Ӱ�ǳ���" << endl;
//			break;
//		case 6:
//		case 5:
//			cout << "����Ϊ�����Ӱһ��" << endl;
//			break;
//		default:
//			cout << "����Ϊ�����Ӱ����Ƭ" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
////����Ľ���ϲ���ͬ�����case��֧���������ࡣ
////����������Ч���жϣ���ֹ���������뵼���쳣��