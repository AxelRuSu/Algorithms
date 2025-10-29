# Sorting algorithms
The sorting.c file contains multiple functions with different sorting algorithms. Change function call in main when testing.

### Algorithms

1. [Insertion sort](#insertion-sort)
2. [Selection sort](#selection-sort)
3. [Bubble sort](#bubble-sort)
4. [Merge sort](#merge-sort)


## Stable vs unstable
### Stable 
A stable sorting algorithm keeps the relative order of elements with equal values the same as in the original list. Following algorithms are stable:

* Insertion sort
* Merge sort
* Bubble sort
  
Example: sorting by cost:
<table>
<tr>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Apple      | 6    |
| Pear      | 12    |
| Orange      | 9    |
| Banana      | 6    |

  </td>
  <td>Stable<br/>-----></td>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Apple      | 6    |
| Banana      | 6    |
| Orange      | 9    |
| Pear      | 12    |


  </td>
  <td align="center">(Different input order) </td>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Banana      | 6    |
| Pear      | 12    |
| Orange      | 9    |
| Apple      | 6    |

  </td>
  <td>Stable<br/>-----></td>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Banana      | 6    |
| Apple      | 6    |
| Orange      | 9    |
| Pear      | 12    |


  </td>
</tr>

</table>

### Unstable 
A unstable sorting algorithm does not guarantee the same order of elements that have equal values. But the original order can be preserved by chance. Following algorithms are unstable:

* Selection sort
* Quick sort


Example: sorting by cost:
<table>
<tr>
   <td>

| Fruit | Cost |
| :---: | ----: |
| Apple      | 6    |
| Pear      | 12    |
| Orange      | 9    |
| Banana      | 6    |

  </td>
  <td>Unstable<br/>--------></td>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Apple      | 6    |
| Banana      | 6    |
| Orange      | 9    |
| Pear      | 12    |


  </td>
  <td align="center">(Same input order) </td>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Apple      | 6    |
| Pear      | 12    |
| Orange      | 9    |
| Banana      | 6    |

  </td>
  <td>Unstable<br/>--------></td>
  <td>

| Fruit | Cost |
| :---: | ----: |
| Banana      | 6    |
| Apple      | 6    |
| Orange      | 9    |
| Pear      | 12    |

  </td>
</table>

## Insertion sort
<p align="center"><a href="https://commons.wikimedia.org/wiki/File:Insertion-sort-example-300px.gif#/media/File:Insertion-sort-example-300px.gif">
<img src="https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif" alt="Insertion-sort-example-300px.gif" height="180" width="300"></a>
<br>By <a href="//commons.wikimedia.org/w/index.php?title=User:Swfung8&amp;action=edit&amp;redlink=1" class="new" title="User:Swfung8 (page does not exist)">Swfung8</a> - <span class="int-own-work" lang="en">Own work</span>, 
<a href="https://creativecommons.org/licenses/by-sa/3.0" title="Creative Commons Attribution-Share Alike 3.0">CC BY-SA 3.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=14961606">Link</a></p>

## Selection sort
<p align="center"><a href="https://commons.wikimedia.org/wiki/File:Selection-Sort-Animation.gif#/media/File:Selection-Sort-Animation.gif">
<img src="https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif" alt="Selection-Sort-Animation.gif" height="371" width="100"></a>
<br>By <a href="https://en.wikipedia.org/wiki/User:Joestape89" class="extiw" title="en:User:Joestape89">Joestape89</a>, 
<a href="http://creativecommons.org/licenses/by-sa/3.0/" title="Creative Commons Attribution-Share Alike 3.0">CC BY-SA 3.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=3330231">Link</a></p>

## Bubble sort
<p align="center"><a href="https://commons.wikimedia.org/wiki/File:Bubble-sort-example-300px.gif#/media/File:Bubble-sort-example-300px.gif">
<img src="https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif" alt="Bubble-sort-example-300px.gif" height="180" width="300"></a>
<br>By <a href="//commons.wikimedia.org/w/index.php?title=User:Swfung8&amp;action=edit&amp;redlink=1" class="new" title="User:Swfung8 (page does not exist)">Swfung8</a> - <span class="int-own-work" lang="en">Own work</span>, 
<a href="https://creativecommons.org/licenses/by-sa/3.0" title="Creative Commons Attribution-Share Alike 3.0">CC BY-SA 3.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=14953478">Link</a></p>

## Merge sort
<p align="center"><a href="https://commons.wikimedia.org/wiki/File:Merge-sort-example-300px.gif#/media/File:Merge-sort-example-300px.gif">
<img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif" alt="Merge-sort-example-300px.gif" height="180" width="300"></a>
<br>By <a href="//commons.wikimedia.org/w/index.php?title=User:Swfung8&amp;action=edit&amp;redlink=1" class="new" title="User:Swfung8 (page does not exist)">Swfung8</a> - <span class="int-own-work" lang="en">Own work</span>, 
<a href="https://creativecommons.org/licenses/by-sa/3.0" title="Creative Commons Attribution-Share Alike 3.0">CC BY-SA 3.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=14961648">Link</a></p>
