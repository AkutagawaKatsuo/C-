////#include <iostream>
////using namespace std;
////
////int main()
////{
////    // ������ֻС������ر���������ʼ��Ϊ0
////    int num1 = 0;
////    int num2 = 0;
////    int num3 = 0;
////
////    // ������ֻС�������
////    cout << "������С��a�����أ�" << endl;
////    cin >> num1;
////    cout << "������С��b�����أ�" << endl;
////    cin >> num2;
////    cout << "������С��c�����أ�" << endl;
////    cin >> num3;
////
////    // �ж���ֻС������ع�ϵ
////    if (num1 > num2)
////    {
////        // a��b�أ����ж�a��c�Ĺ�ϵ
////        if (num1 > num3)
////        {
////            // a��cҲ�أ�a����
////            cout << "С��a����" << endl;
////        }
////        else
////        {
////            // c��a�أ�c����
////            cout << "С��c����" << endl;
////        }
////    }
////    else if (num1 == num2)
////    {
////        // a��bһ����
////        if (num1 > num3)
////        {
////            // a��b����c��
////            cout << "С��a��bһ���ز��Ҵ���С��c" << endl;
////        }
////        else if (num1 == num3) {
////            // ��ֻһ����
////            cout << "��ֻС��һ����" << endl;
////        }
////        else
////        {
////            // c��a��b��
////            cout << "С��c����" << endl;
////        }
////    }
////    else if (num2 == num3)
////    {
////        // b��cһ����
////        if (num2 > num1)
////        {
////            // b��c����a��
////            cout << "С��b��cһ���ز��Ҵ���С��a" << endl;
////        }
////        else if (num2 == num1) {
////            // ��ֻһ����
////            cout << "��ֻС��һ����" << endl;
////        }
////        else
////        {
////            // a��b��c��
////            cout << "С��a����" << endl;
////        }
////    }
////    else if (num1 == num3)
////    {
////        // a��cһ����
////        if (num1 > num2)
////        {
////            // a��c����b��
////            cout << "С��a��cһ���ز��Ҵ���С��b" << endl;
////        }
////        else if (num1 == num2) {
////            // ��ֻһ����
////            cout << "��ֻС��һ����" << endl;
////        }
////        else
////        {
////            // b��a��c��
////            cout << "С��b����" << endl;
////        }
////    }
////    else 
////    {
////        // ��������������㣬�Ƚ�b��c
////        if (num2 > num3)
////        {
////            cout << "С��b����" << endl;
////        }
////        else
////        {
////            cout << "С��c����" << endl;
////        }
////    }
////
////    system("pause");
////    return 0;
////}
//
////�Ľ���Ĵ��룬ȥ��������͸��ǲ�ȫ�����
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // ������ֻС������ر���������ʼ��Ϊ0
//    int num1 = 0;
//    int num2 = 0;
//    int num3 = 0;
//
//    // ������ֻС�������
//    cout << "������С��a�����أ�" << endl;
//    cin >> num1;
//    cout << "������С��b�����أ�" << endl;
//    cin >> num2;
//    cout << "������С��c�����أ�" << endl;
//    cin >> num3;
//
//    // �����ж���ֻС���Ƿ�������ȫ��ͬ
//    if (num1 == num2 && num2 == num3) {
//        cout << "��ֻС��һ����" << endl;
//    }
//    else {
//        // �ҳ�������غͶ�Ӧ��С��
//        int maxWeight = num1;
//        string result = "С��a";
//        if (num2 > maxWeight) {
//            maxWeight = num2;
//            result = "С��b";
//        }
//        if (num3 > maxWeight) {
//            maxWeight = num3;
//            result = "С��c";
//        }
//
//        // ͳ���м�ֻС��ﵽ�������
//        int count = 0;
//        if (num1 == maxWeight) count++;
//        if (num2 == maxWeight) count++;
//        if (num3 == maxWeight) count++;
//
//        // ����������ص�С������������
//        if (count == 1) {
//            // ֻ��һֻ����
//            cout << result << "����" << endl;
//        }
//        else if (count == 2) {
//            // ��ֻ�������أ��ж�������ֻ
//            if (num1 == maxWeight && num2 == maxWeight)
//                cout << "С��a��С��b��������" << endl;
//            else if (num1 == maxWeight && num3 == maxWeight)
//                cout << "С��a��С��c��������" << endl;
//            else
//                cout << "С��b��С��c��������" << endl;
//        }
//        // ��ֻһ���ص��������ǰ�洦��
//    }
//
//    system("pause");
//    return 0;
//}