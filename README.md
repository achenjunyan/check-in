#前言
这是一个开源的可以快速签到打卡的程序
使用C语言进行编写，语言规则 99C
测试用编译器 Devc++与C4droid均成功编译运行。
开源代码暂时分为两种版本（全拼与首拼）
##首拼（快速之选）
首拼可以快速的进行打卡签到
###使用方法
编译运行，按照提示进行操作
例如，第一个同学名叫 陈俊言，则输入 cjy 然后回车。
第二个同学名叫王灿，则继续输入 wc 然后回车
如果只有以上两名同学打卡，则再输入 s 然后回车
未签到的同学的姓名将会显示出来。
###注意
如果一个班级内群成员首拼出现冲突，程序会一直识别靠前的那位同学的姓名从而导致错误
如果出现此种情况，请使用全拼版本或在首拼版本中添加if语句进行判断。

##全拼（安全之选）
全拼可以安全的进行打卡签到，防止误操作和姓名首拼冲突的情况
###使用方法
编译运行，按照提示进行操作
例如，第一个同学名叫 陈俊言，则输入 chenjunyan 然后回车。
第二个同学名叫王灿，则继续输入 wangcan 然后回车
如果只有以上两名同学打卡，则再输入 s 然后回车
未签到的同学的姓名将会显示出来。
###注意
如果一个班级内群成员姓名拼音出现冲突，程序会一直识别靠前的那位同学的姓名从而导致错误
如果出现此种情况，请在全拼版本中添加if语句进行判断。
