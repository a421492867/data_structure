#Chapter4       栈与队列


#栈  
    #def：限定仅在表尾进行插入和删除操作的线性表
            允许插入和删除的一端称为栈顶，另一端称为栈底
            后进先出（LIFO）的线性表。
            栈的插入操作叫做进栈（Push），删除操作叫做出栈（POP）。
    #进栈出栈形式变化：
            ex：1，2，3一次进栈，出栈可能性：
                            1、2、3进，3、2、1出，321
                            1进1出，2进2出，3进3出，123
                            1、2进，2、1出，3进3出，213
                            1进1出，3进3进，3出2出，132
                            1进2进，2出3进，3出1出，231
    #栈的顺序存储结构：
        线性表的顺序存储结构，但限定在表尾进行插入和删除操作
    #共享栈：top1 + 1 == top2 则为栈满
    #栈的链式存储结构
    
        两种存储结构的对比：对于进栈和出栈操作两者时间复杂度均为O(1)
                        顺序栈需要事先确定一个长度，可能存在内存浪费，但存取定位方便
                        链栈要求每个元素有指针域，增加了内存开销，但栈长度无限制。
                    
    #栈的作用
       1、递归
            def：  一个直接调用自己或通过一系列的调用语句间接调用自己的函数，称为递归函数
                 每个递归定义必须至少有一个条件，满足时递归不再进行
            递归与栈的关系：
                递归过程退回的顺序是它前行顺序的逆序。
                在前行阶段，对于每一层递归，函数的局部变量、参数值以及返回地址都被压入栈中。在退回阶段，位于栈顶的局部变量、参数值和返回地址被弹出，用于返回调用层次中执行代码的其余部分，也就是恢复了调用的状态。
        2、四则运算表达式求值
            逆波兰式，不需要括号的后缀表示法。
            例如：9+(3-1)*3+10/2   ---> 931-3*+102/+
            
            #计算规则：从左到右遍历表达式的每个数字和字符，遇到事数字就进栈，遇到是符号，就将处于栈顶两个数字出栈，进行运算，运算结果出栈，一直到最终获得结果。
            
            #中缀转后缀规则：从左到右遍历中缀表达式的每个数字和符号，若是数字就输出，若是符号，则判断其与栈顶符号的优先级，是右括号或优先级低于栈顶符号，则栈顶元素依次出栈并输出，并将当前符号进栈，一直到最终输出后缀表达式为止。
            
            计算机处理计算：1、中缀转后缀 2、后缀出结果。
            
        
            
