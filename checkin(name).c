/*
这是一个可以实现快速签到打卡的程序
使用C语言编程
V1.2 Demo版本
By：Junyan
程序中所含姓名与现实姓名无关，仅作为测试使用
2020.2.10

下次更新可能会使用bool来进行判断，但是使用起来差别不大
如果你需要用这个但是不知道如何修改，与我联系。

c++语言版本的或者Basic语言版本的暂时不准备搞。
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(void)
{
int chenjunyan =0;
int caojian =0;
int duraorao =0;
int durenjie =0;
int guangzhehao=0;
int hushibin=0;
int huyujing=0;
int houmengqin=0;
int liangping=0;
int liumengyao=0;
int luzhongyi=0;
int luzhihao=0;
int majingjing=0;
int qianman=0;
int siyi=0;
int sunqingqing=0;
int wanglong=0;
int wangchen=0;
int wangchengjian=0;
int wangwei=0;
int wuruoxing=0;
int xiejiabao=0;
int xuxiao =0;
int xurenjie =0;
int gaoyuan =0;
int yechuanwen =0;
int yutiecheng =0;
int zhangbin =0;
int zhangchen =0;
int zhangdongxing =0;
int zhangheng =0;
int zhangqianqian =0;
int zhangshengjie =0;
int zhangying =0;
int zhuyezhan =0;
int wuwenjing =0;
int zhaoziqian =0;
/*__将姓名设为变量进行赋值
0为false，1为true*/

int loop;//循环判断，请勿修改
int total;//用于总人数统计
int loops;//备用变量
int untotal;//用于未签到总人数统计
char name[40]= {0};//最长字符限制40以内，超过20会出现溢出导致程序错误。
total=0;
untotal=0;
loop=1; 

printf("欢迎使用签到程序，请根据提示输入\n结束录入请输入s并回车\n\n");

while(loop==1)
{
//分块循环判断，因为量少，循环判断所需时间可以忽略不计
//我能说暴力算法最好写嘛（化掉）
printf("输入姓名小写全拼：");
gets(name);
if(strcmp(name,"chenjunyan") == 0)
{
chenjunyan = 1;//如果签到，进入判断中，当前模块内的同学姓名变量=1（true）
printf("陈俊言 ✓\n");//输出签到成功以便核对
total++;//签到人数+1（也可以写成total=total+1;）
}
else if(strcmp(name,"caojian") == 0) //继续判断
{
caojian = 1;
printf("曹建 ✓\n");
total++;
}
else if(strcmp(name,"duraorao") == 0)
{
duraorao = 1;
printf("杜娆娆 ✓\n");
total++;
}
else if(strcmp(name,"durenjie") == 0)
{
durenjie = 1;
printf("杜仁杰 ✓\n");
total++;
}
else if(strcmp(name,"guangzhehao") == 0)
{
guangzhehao = 1;
printf("光哲浩 ✓\n");
total++;
}
else if(strcmp(name,"hushibin") == 0)
{
hushibin = 1;
printf("胡世斌 ✓\n");
total++;
}
else if(strcmp(name,"huyujing") == 0)
{
huyujing = 1;
printf("胡雨静 ✓\n");
total++;
}
else if(strcmp(name,"houmengqin") == 0)
{
houmengqin = 1;
printf("候梦勤 ✓\n");
total++;
}
else if(strcmp(name,"liangping") == 0)
{
liangping = 1;
printf("梁萍 ✓\n");
total++;
}
else if(strcmp(name,"liumengyao") == 0)
{
liumengyao = 1;
printf("刘梦瑶 ✓\n");
total++;
}
else if(strcmp(name,"luzhongyi") == 0)
{
luzhongyi = 1;
printf("卢忠义 ✓\n");
total++;
}
else if(strcmp(name,"luzhihao") == 0)
{
luzhihao = 1;
printf("陆志豪 ✓\n");
total++;
}
else if(strcmp(name,"majingjing") == 0)
{
majingjing = 1;
printf("马晶晶 ✓\n");
total++;
}
else if(strcmp(name,"qianman") == 0)
{
qianman = 1;
printf("钱曼 ✓\n");
total++;
}
else if(strcmp(name,"siyi") == 0)
{
siyi = 1;
printf("司伊 ✓\n");
total++;
}
else if(strcmp(name,"sunqingqing") == 0)
{
sunqingqing = 1;
printf("孙晴晴 ✓\n");
total++;
}
else if(strcmp(name,"wanglong") == 0)
{
wanglong = 1;
printf("汪龙 ✓\n");
total++;
}
else if(strcmp(name,"wangchen") == 0)
{
wangchen = 1;
printf("王辰 ✓\n");
total++;
}
else if(strcmp(name,"wangchengjian") == 0)
{
wangchengjian = 1;
printf("王城建 ✓\n");
total++;
}
else if(strcmp(name,"wangwei") == 0)
{
wangwei = 1;
printf("王伟 ✓\n");
total++;
}
else if(strcmp(name,"wuruoxing") == 0)
{
wuruoxing = 1;
printf("吴弱兴 ✓\n");
total++;
}
else if(strcmp(name,"xiejiabao") == 0)
{
xiejiabao = 1;
printf("谢家宝 ✓\n");
total++;
}




else if(strcmp(name,"xuxiao") == 0)
{
xuxiao = 1;
printf("徐晓 ✓\n");
total++;
}
else if(strcmp(name,"xurenjie") == 0)
{
xurenjie = 1;
printf("许仁杰 ✓\n");
total++;
}
else if(strcmp(name,"gaoyuan") == 0)
{
gaoyuan = 1;
printf("高原 ✓\n");
total++;
}
else if(strcmp(name,"yechuanwen") == 0)
{
yechuanwen = 1;
printf("叶传稳 ✓\n");
total++;
}
else if(strcmp(name,"yutiecheng") == 0)
{
yutiecheng = 1;
printf("俞铁成 ✓\n");
total++;
}
else if(strcmp(name,"zhangbin") == 0)
{
zhangbin = 1;
printf("张斌 ✓\n");
total++;
}
else if(strcmp(name,"zhangchen") == 0)
{
zhangchen = 1;
printf("张陈 ✓\n");
total++;
}
else if(strcmp(name,"zhangdongxing") == 0)
{
zhangdongxing = 1;
printf("张东兴 ✓\n");
total++;
}
else if(strcmp(name,"zhangheng") == 0)
{
zhangheng = 1;
printf("张恒 ✓\n");
total++;
}
else if(strcmp(name,"zhangqianqian") == 0)
{
zhangqianqian = 1;
printf("张倩倩 ✓\n");
total++;
}
else if(strcmp(name,"zhangshengjie") == 0)
{
zhangshengjie = 1;
printf("张圣洁 ✓\n");
total++;
}
else if(strcmp(name,"zhangying") == 0)
{
zhangying = 1;
printf("张滢 ✓\n");
total++;
}
else if(strcmp(name,"zhuyezhan") == 0)
{
zhuyezhan = 1;
printf("朱叶展 ✓\n");
total++;
}
else if(strcmp(name,"wuwenjing") == 0)
{
wuwenjing = 1;
printf("吴文静 ✓\n");
total++;
}
else if(strcmp(name,"zhaoziqian") == 0)
{
zhaoziqian = 1;
printf("赵子骞 ✓\n");
total++;
}

else if(strcmp(name,"s") == 0)
//当输入s时，跳出while循环结束判断进入下一项目
{
loop=0;//loop变为0，结束循环判断
printf("\n结束录入....\n");//输出提示以便核对
}
else
printf("Error:查无此人，请检查拼写 X\n");//当拼写错误提示重新拼写

}
//结果输出程序


loop=1;
printf("以下同学未签到：\n\n_______\n\n\n");
if(chenjunyan==0)
{
printf("陈俊言\n\n");
untotal++;//未签到人数+1
}
if(caojian==0)
{
printf("曹建\n\n");
untotal++;
}
if(duraorao==0)
{
printf("杜娆娆\n\n");
untotal++;
}
if(durenjie==0)
{
printf("杜仁杰\n\n");
untotal++;
}
if(guangzhehao==0)
{
printf("光哲浩\n\n");
untotal++;
}
if(hushibin==0)
{
printf("胡士斌\n\n");
untotal++;
}
if(huyujing==0)
{
printf("胡雨静\n\n");
untotal++;
}
if(houmengqin==0)
{
printf("候梦勤\n\n");
untotal++;
}
if(liangping==0)
{
printf("梁萍\n\n");
untotal++;
}
if(liumengyao==0)
{
printf("刘梦瑶\n\n");
untotal++;
}
if(luzhongyi==0)
{
printf("卢忠义\n\n");
untotal++;
}
if(luzhihao==0)
{
printf("陆志豪\n\n");
untotal++;
}
if(majingjing==0)
{
printf("马晶晶\n\n");
untotal++;
}
if(qianman==0)
{
printf("钱曼\n\n");
untotal++;
}
if(siyi==0)
{
printf("司仪\n\n");
untotal++;
}
if(sunqingqing==0)
{
printf("孙晴晴\n\n");
untotal++;
}
if(wanglong==0)
{
printf("汪龙\n\n");
untotal++;
}
if(wangchen==0)
{
printf("王辰\n\n");
untotal++;
}
if(wangchengjian==0)
{
printf("王城建\n\n");
untotal++;
}
if(wangwei==0)
{
printf("王伟\n\n");
untotal++;
}
if(wuruoxing==0)
{
printf("吴弱兴\n\n");
untotal++;
}
if(xiejiabao==0)
{
printf("谢家宝\n\n");
untotal++;
}
if(xuxiao==0)
{
printf("徐晓\n\n");
untotal++;
}
if(xurenjie==0)
{
printf("许仁杰\n\n");
untotal++;
}
if(gaoyuan==0)
{
printf("高原\n\n");
untotal++;
}
if(yechuanwen==0)
{
printf("叶传稳\n\n");
untotal++;
}
if(yutiecheng==0)
{
printf("俞铁成\n\n");
untotal++;
}
if(zhangbin==0)
{
printf("张斌\n\n");
untotal++;
}
if(zhangchen==0)
{
printf("张陈\n\n");
untotal++;
}
if(zhangdongxing==0)
{
printf("张东兴\n\n");
untotal++;
}
if(zhangheng==0)
{
printf("张恒\n\n");
untotal++;
}
if(zhangqianqian==0)
{
printf("张倩倩\n\n");
untotal++;
}
if(zhangshengjie==0)
{
printf("张圣洁\n\n");
untotal++;
}
if(zhangying==0)
{
printf("张滢\n\n");
untotal++;
}
if(zhuyezhan==0)
{
printf("朱叶展\n\n");
untotal++;
}
if(wuwenjing==0)
{
printf("吴文静\n\n");
untotal++;
}
if(zhaoziqian==0)
{
printf("赵子骞\n\n");
untotal++;
}

printf("共有%d人，本次签到%d人，未签到%d人。",total+untotal,total,untotal);
printf("\n______\n\n\n\n");

return 0;
}
