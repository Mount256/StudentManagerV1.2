#include"mainhead.h"

void Guanyu()
{
	printf("【关于】\n");
	printf("作者：Mount256 版本号：1.2\n");
	printf("【更新记录】\n");
	printf("2020.3.17 V1.2 修正教师查询返回后不清屏的bug，增加“关于”，增加应用图标\n");
	printf("2020.2.25 V1.1 增加作者的话和使用说明\n");
	printf("2020.2.21 V1.0 正式版本\n");
	printf("一些新想法，有空再弄吧(2020.2.25):1.可选择学生信息导出文件；2.对学生信息进行排序的功能\n"); 
	printf("===============================\n");
	system("pause");
}

void Author()
{
	printf("【学生管理系统开发过程记录】\n");
	printf("2.5——2.8登陆注册系统\n2.14——2.20教师系统\n2.21学生系统（基本完工）\n");
	printf("===============================\n");
	printf("接到这个寒假作业，其实我应该是有预料到的\n对于这个作业我不想随随便便在网上找答案copy+paste，\n毕竟一直以来想做个类似的project来检验自己的能力\n");
	printf("这个project基本上是断断续续完成的，每天编程的时间大概2——3h，\n其中大部分时间都花在一些很低级的错误啦，bug啦，以及深夜的灵感迸发（x）\n因此也遇到了很多困难\n");
	printf("不过总算闯过了，今天总算松口气啦\n也算是没有枉费小学和高中自学C的心血。。。\n在这个过程中也真的学到了很多东西呢\n");
	printf("比如知道了文件操作的一些函数和要注意的地方（简直是血的教训qwq）\n比如优化字符串分离的算法，以及工程的一些知识 等等。。。\n也有很多体会，那就是。。。\n");
	printf("1.不要重复发明轮子。这句话真的很有道理，现成的函数比你写的效率快得多\n2.对于大project，oop真的优于pop啊啊啊啊啊啊啊啊啊啊\n（看来要开始学C++了？\n3.真的挺辛苦的，尤其是隐形的非编译错误的那种，头都大了\n");
	printf("好啦，大家就尽情在本程序找bug吧（逃\n2020.2.21\nby Mount256\n");
	printf("===============================\n");
	system("pause");
}

void instrction()
{
	printf("【教师版使用说明】\n");
	printf("1.添加学生用户：该功能是往学生列表的最后面添加学生的，添加学生的同时将为该生创建一个新账户，初始密码：123456，但是您不能添加重复姓名。\n");
	printf("2.查看/查找/编辑/删除学生信息：\n");
	printf("  2-1&2-2.可翻看上一个下一个学生信息\n");
	printf("  2-3.查找/跳转功能：输入要查找的关键字，若有查找结果，程序将以翻页的形式展示查找结果。\n");
	printf("      您可以上下翻页查看 查找结果，若浏览到您想要的结果，点击确定即跳转到该结果。点击退出则返回到您原来浏览的地方。\n");
	printf("  2-4.在该生前面添加一个学生：与添加学生用户的功能相同。\n");
	printf("  2-5.修改学号或成绩\n");
	printf("  2-6.删除学生信息：此功能将删除学生信息以及学生的账户。\n ");
	printf("  2-7.重置该生密码为123456。\n");
	printf("3.导出所有学生信息：将所有学生信息导出到文本文档，名字为学生信息，文件放在本程序所在目录下。\n");
	printf("4.修改密码。\n");
	printf("5.注销用户：请注意该操作将删除您的账户，但是所有学生信息和学生账户将不会受到影响。\n"); 
	printf("===========================================================\n");
	system("pause");
	system("cls");
}
