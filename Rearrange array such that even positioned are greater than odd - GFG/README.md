# Rearrange array such that even positioned are greater than odd
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array A of n elements, rearrange the array according to the following relations :<br>
<img alt=" A[i] >= A[i-1] " class="ql-img-inline-formula quicklatex-auto-format" src="http://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-0dbc8c51293ab1c3cbd7e6d08a320add_l3.svg" style="height:18px; vertical-align:-5px; width:125px" title="Rendered by QuickLaTeX.com"> , if i is even.<br>
<img alt=" A[i] <= A[i-1] " class="ql-img-inline-formula quicklatex-auto-format" src="http://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-3cd01608f53118c34ea15ac9138adbfa_l3.svg" style="height:18px; vertical-align:-5px; width:125px" title="Rendered by QuickLaTeX.com"> , if i is odd.[Considering 1-indexed array]<br>
Return the resultant array.</span></p>

<pre><span style="font-size:18px"><strong>Example:</strong>

<strong>Input 1:
A[] = {</strong>1, 2, 2, 1}<strong>
Output:
</strong>1 2 1 2<strong>
Explanation:</strong>
Both 2 are at even positions and 1 at odd satisfying 
given condition <strong>

Input 2:
A[] = {</strong>1, 3, 2}
<strong>Output:
</strong>1 3 2
<strong>Explanation:</strong>
Here, the array is already sorted as per the conditions.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>assign()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return the resultant array.<br>
<strong>Note</strong>:&nbsp;Generated output will depict whether your returned answer is correct or wrong</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(NLOG(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup></span><br>
<span style="font-size:18px">1 ≤ arr[i] ≤ 10<sup>6</sup></span></p>
</div>