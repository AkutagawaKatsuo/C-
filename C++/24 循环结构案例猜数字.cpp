//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//
//	int val = 0;
//	
//	while(1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "���ֹ���" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "���ֹ�С" << endl;
//		}
//		else
//		{
//			cout << "��ϲ���¶��ˣ�" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
////�Ľ���Ĵ�������������Ч���жϺ���ʾ��Ϣ�������û����顣
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//    // ��ʼ�����������
//    srand((unsigned int)time(NULL));
//    // ����1~100�������
//    int num = rand() % 100 + 1;
//
//    int val = 0;
//    cout << "���һ��1~100֮������֣�" << endl;
//
//    while (1)
//    {
//        cin >> val;
//        // ��������Ƿ���Ч
//        if (cin.fail()) {
//            cin.clear(); // ��������־
//            cin.ignore(1024, '\n'); // ������������
//            cout << "������Ч�����������֣�" << endl;
//            continue;
//        }
//        if (val > num)
//        {
//            cout << "���ֹ���" << endl;
//        }
//        else if (val < num)
//        {
//            cout << "���ֹ�С" << endl;
//        }
//        else
//        {
//            cout << "��ϲ���¶��ˣ�" << endl;
//            break;
//        }
//    }
//
//    system("pause");
//    return 0;
//}