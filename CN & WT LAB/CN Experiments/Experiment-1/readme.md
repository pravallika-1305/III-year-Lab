# AIM
## To implement the data link layer framing methods such as character counting, character-stuffing and bit stuffing.

Framing breaks the datagrams passed down by above layers and convert them into frames ready for transfer.
1. Character Counting

  - Procedure  
    - The data that needs to be transmitted is taken as the input.
    - The length of each frame is calculated and attached before the frame.
    - After the data reaches the receiver, the lengths are removed and data is printed frame-wise.

  ![Output](https://github.com/pravallika-1305/III-year-Lab/blob/master/CN%20%26%20WT%20LAB/CN%20Experiments/Experiment-1/output1.png)
  
  
  2. Bit Stuffing

  - Procedure  
    - The data that needs to be transmitted is taken as the input.
    - The flag bits(01111110) are added to the input data.
    - After every occurence of a pattern consisting of 5 consecutive 1's a zero must be added 
    - The flag bit is added again.
  [Output](https://github.com/pravallika-1305/III-year-Lab/blob/master/CN%20%26%20WT%20LAB/CN%20Experiments/Experiment-1/output2.png)
