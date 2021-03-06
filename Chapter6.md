
#树

	#def：树是n个结点构成的有限集。n=0时称为空树。在任意一棵非空树中：
		（1）有且仅有一个特定的称为根（Root）的结点
		（2）当 n > 1时，其余结点可分为m（m > 0）个互不相交的有限集T1，T2、……、Tm，其中每一个集合本身又是
			一棵树，并且称为根的子树。


		1、n > 0 时，根结点时唯一的
		2、m > 0 时，子树个数没有限制，但它们一定互不相交

	#结点分类：
		结点拥有的子树数称为结点的度，度为0的结点称为叶结点或终端结点，度不为0的结点称为非终端结点或分支结点
		除根结点之外，分支结点也称为内部结点。
		树的度时树内各结点的度的最大值

	#结点之间的关系
		结点的子树的根称为该结点的孩子，相应的，该结点称为孩子的双亲。
		同一个双亲之间互称兄弟
		结点的祖先是从根到该结点所经分支上的所有结点
		以某结点为根的子树中的任一结点都称为该结点的子孙

	#树的其他相关概念
		结点的层次从根开始定义起，根为第一层，根的孩子为第二层。
		双亲在同一层的结点互为堂兄弟
		树中结点的最大层次称为树的深度或高度

		如果将树中的结点的各个子树看成从左到右是有次序的，不能互换的，则称该树为有序树，否则称为无序树

		森林是m棵互不相交的树的集合


	#双亲表示法：
		在每个结点中，附设一个指示器指示双亲结点到链表中的位置

	#孩子表示法
		把每个结点的孩子结点排列起来，以单链表作存储结构，然后n个头指针又组成一个线性表，采用顺序存储结构，存放到
		一个一维数组中

	#孩子兄弟表示法
		设置两个指针，分别指向该结点的第一个孩子和次结点的右兄弟


	#二叉树
		二叉树是n个结点的有限集合，该集合或者为空集，或者由一个根结点和两棵互不相交的、分别称为根结点的左子树和右子树
		的二叉树组成。

		#二叉树的特点：
			1、每个结点最多有两棵子树，不存在度大于2的结点
			2、左子树和右子树是有顺序的
			3、即使树中某结点只有一棵子树，也要区分它是左子树还是右子树


		#特殊二叉树：
			斜树：所有结点都只有左（右）子树的二叉树叫左（右）斜树。

			满二叉树：一棵二叉树中，如果所有分支结点都存在左子树和右子树，并且所有叶子都在同一层上
				特点：
					1、叶子只能出现在最下一层
					2、非叶子结点的度一定是2
					3、同样深度的二叉树中，满二叉树的结点个数最多，叶子树最多
			完全二叉树：对一棵具有n个结点的二叉树按层序编号，如果编号为i的结点与同样深度的满二叉树中编号为i的结点在
					  二叉树中的位置完全相同，则这棵二叉树称为完全二叉树

					  	特点：
					  		1、叶子结点只能出现在最下两层
					  		2、最下层的叶子一定集中在左部连续位置
					  		3、倒数二层，若有叶子结点，一定都在右部连续位置。
					  		4、如果结点度为1，则该结点只有左孩子
					  		5、同样结点树的二叉树，完全二叉树深度最小
			#二叉树性质
				1、在二叉树的第i层上至多有2^(i-1)个结点（i >= 1）
				2、深度为k的二叉树至多有2^k - 1个结点（i >= 1）
				3、对任何一棵二叉树T，如果终端结点数为n0，度为2的结点数为n2，则 n0 = n2 + 1
					设n1为度是1的结点数，则结点总数 n = n0 + n1 + n2
				4、具有n个结点的完全二叉树深度为[log2 n] + 1 （[x]表示不大于x的最大整数）
				5、如果对一棵具有n个结点的完全二叉树结点按层编号，任意结点i（1 <= i <= n）
					1、如果i=1，则i是二叉树的根，无双亲，i > 1，其双亲是结点[i/2]
					2、若2i > n， i无左孩子，否则左孩子为2i
					3、若2i + 1 > n ，i无右孩子，否则右孩子是2i + 1


		#二叉树的遍历
			#def：指从根结点出发，按照某种次序依次访问二叉树中的所有结点，使得每个结点被访问一次且仅被访问一次

			#遍历方法
				1、前序遍历
					若二叉树为空，则空操作返回，否则先访问根结点，然后前序遍历左子树，再前序遍历右子树
				2、中序遍历
					若树为空，则空操作返回，否则从根结点开始（不是先访问），中序遍历根结点的左子树，然后访问根结点，最后中序
					遍历右子树
				3、后序遍历
					若树为空，则空操作返回，否则从左到右先叶子后结点的方式遍历访问左右子树，最后访问根结点
				4、层序遍历
					若树为空，则空操作返回，否则从树的第一层，从上而下逐层遍历，在同一层中，按从左到右的顺序对结点逐个访问


		#线索二叉树
			对于一个有n个结点的二叉链表，每个结点有指向左右孩子的两个指针域，一共2n个指针域。而n个结点的二叉树一共有
			n - 1条分支线数，也就是存在2n - (n - 1) = n + 1个空指针域

			=> 指向前驱和后继的指针称为线索，加上线索的二叉链表称为线索链表，相应的二叉树就称为线索二叉树

			对二叉树以某种次序遍历使其变成线索二叉树的过程称做线索化

		#树、森林与二叉树的转换
			#树转换成二叉树
				1、加线。在所有兄弟结点之间加一条连线
				2、去线。对树中每个结点，只保留它与第一个孩子结点的连线，删除它与其他孩子结点之间的连线
				3、层次调整。使其层次分明

			#森林转换为二叉树
				1、把每个树转换成二叉树
				2、第一棵树不动，从第二棵二叉树开始，依次把后一个二叉树的根结点作为前一棵树根结点的右孩子，用线连接起来

			#二叉树转换为树
				1、加线。左孩子的n个右孩子结点都作为此结点的孩子
				2、去线。删除原二叉树中所有结点与其右孩子结点的连线
				3、层次调整

			#二叉树转换为森林
				1、从根结点开始，若存在右孩子，则把与右孩子的连线删除，在查看分离后的二叉树。直到所有右孩子连线都删除为止
				2、将每棵树分离

			#树的遍历
				1、先根遍历
				2、后根遍历

			#森林的遍历
				1、前序遍历
				2、后序遍历

			森林的前序遍历和二叉树的前序遍历结果相同，森林的后序遍历和二叉树的中序遍历结果相同。

		#Huffman树
			从树中的一个结点到另一个结点之间的分支构成两个结点之间的路径，路径上的分支数目称做路径长度

			树的路径长度就是从树根到每一个结点的路径长度之和

			带权路径长度WPL最小的二叉树称做Huffman树

			#构造Huffman树的算法
				1、根据给定的n个权值{w1,w2,...,wn}构成n棵二叉树集合F={T1,T2,...,Tn}，其中每棵二叉树Ti中只有一个带权为wi
				根结点，其左右子树均为空。
				2、在F中选取两棵根结点的权值最小的树作为左右子树构造一棵新的二叉树，且置新的二叉树的根结点的权值为其左右子树上
				根结点权值之和。
				3、在F中删除这两棵树，同时将新得到的二叉树加入F中
				4、重复2和3，直到F只含一棵树为止，这棵树便是Huffman树。