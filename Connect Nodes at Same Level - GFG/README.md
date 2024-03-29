# Connect Nodes at Same Level
## Medium 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><div class="entry-content">
<p><span style="font-size:18px">Given a binary tree, connect the nodes that are at same level. You'll be given an addition&nbsp;<strong>nextRight&nbsp;</strong>pointer for the same.</span></p>

<p><span style="font-size:18px"><strong>Initially</strong>, all the <strong>nextRight </strong>pointers point to <strong>garbage </strong>values. <strong>Your function</strong> should set these pointers to point next right for each node.</span><br>
<span style="font-size:18px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; 10 ------&gt; NULL<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; / \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp; 5&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; =&gt; &nbsp;&nbsp;&nbsp; 3 ------&gt; 5 --------&gt; NULL<br>
&nbsp;&nbsp;&nbsp; / \&nbsp; &nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp;&nbsp;&nbsp; /&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp; 4&nbsp;&nbsp; 1&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp;&nbsp; 4 --&gt; 1 -----&gt; 2 -------&gt; NULL</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>     3
&nbsp;  /  \
&nbsp; 1    2
<strong>Output:
</strong>3 1 2
1 3 2<strong>
Explanation:</strong>The connected tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3 ------&gt; NULL
&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;\
&nbsp;&nbsp;  1-----&gt; 2 ------ NULL</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>      10
&nbsp;   /   \
&nbsp;  20   30
&nbsp; /  \
 40  60
<strong>Output:
</strong>10 20 30 40 60
40 20 60 10 30<strong>
Explanation:</strong>The connected tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10 ----------&gt; NULL
&nbsp;&nbsp;&nbsp;  &nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \
&nbsp;&nbsp;&nbsp;&nbsp; 20 ------&gt; 30 -------&gt; NULL
&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp; \
&nbsp;40 ----&gt; 60 ----------&gt; NULL</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to take input. Complete the function <strong>connect()&nbsp;</strong>that takes <strong>root&nbsp;</strong>as parameter and connects the nodes at same level.</span> <span style="font-size:18px">The printing is done by the driver code. First line of the output will be level order traversal and second line will be inorder travsersal</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>
</div>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 10<sup>5</sup><br>
0 ≤ Data of a node ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>