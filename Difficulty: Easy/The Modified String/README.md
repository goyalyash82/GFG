<h2><a href="https://www.geeksforgeeks.org/problems/the-modified-string-1587115621/1">The Modified String</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Ishaan is playing with strings these days. He has found a new string. He wants to modify it as per the following rules to make it valid:</span></p>
<ul>
<li><span style="font-size: 18px;">The string should not have three consecutive same characters (Refer example for explanation).</span></li>
<li><span style="font-size: 18px;">He can add any number of characters anywhere in the string.&nbsp;</span></li>
</ul>
<p><span style="font-size: 18px;">Find the minimum number of characters which Ishaan must insert in the string to make it valid.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>S = aabbbcc
<strong>Output: </strong>1<strong>
Explanation: </strong>In&nbsp;aabbbcc 3 b's occur
consecutively, we add a 'd',and Hence,
output will be aabbdbcc.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>S = aaaaa
<strong>Output: </strong>2<strong>
Explanation: </strong>&nbsp;In aaaaa 5 a's occur
consecutively,we need to add 2 'b', and
Hence, the output will be aababaa.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>This is a function problem. You only need to complete the&nbsp;function <strong>modified()</strong>&nbsp;that&nbsp;returns&nbsp;the&nbsp;answer.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints :&nbsp;</strong><br>1 &lt;= Length of S &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;