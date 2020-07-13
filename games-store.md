### GAMES STORE
ร้านเกมแห่งหนึ่งกำลังจะปิดตัวลง จึงขายเกมที่ดีที่สุด 5 เกมเท่านั้น โดยรายชื่อตามลำดับดังต่อไปนี้

PUBG 559บาท, OVERWATCH 1400บาท, THE SIMS4 1000บาท, DECEIT 200บาท, STAXEL 350บาท

โดยโปรแกรมของร้านนี้จะแสดงรายชื่อเกมตามลำดับที่บอกมา แต่จะไม่มีการระบุราคา เนื่องจากร้านกำลังจะปิดตัวลง จึงจะใช้มาตรการนี้เพื่อให้ลูกค้าซื้อเกมที่ตัวเองอยากเล่นจริงๆเท่านั้น

แต่ถ้าเงินของลูกค้ามากพอ ลูกค้าสามารถระบุได้ว่าต้องการเกมเพิ่มหรือไม่

และเมื่อลูกค้าซื้อเกมจนพอใจแล้ว ระบบจะทำการแสดงผลว่าลูกค้าซื้อเกมไปทั้งหมดกี่เกม และบอกราคารวม

> หมายเหตุ:
>
> กำหนดให้ input prompt ได้แก่
> \>\> Please select the number of games you want:	ลูกค้าจะต้องป้อนตัวเลขของเกมที่อยากได้
>
> \>\> Do you want anything else?\(y=1,n=0\):	ลูกค้าจะต้องป้อนตัวเลข เพื่อระบุว่าต้องการเกมเพิ่มหรือไม่
___
### รายละเอียด
* บรรทัดที่ 1 \[Output\] "Hello, Welcome to games store\."
* บรรทัดที่ 2 \[Output\] "Now we have 5 interesting games\." โปรแกรมจะแนะนำเกมน่าสนใจที่ร้านมีอยู่ ตามรายชื่อดังข้างล่างเป็นลำดับตัวเลข เพื่อให้ลูกค้าเลือกหมายเลขเกมที่ต้องการ
* บรรทัดที่ 3 \[Output\] "1\. PUBG"
* บรรทัดที่ 4 \[Output\] "2\. OVERWATCH"
* บรรทัดที่ 5 \[Output\] "3\. THE SIMS4"
* บรรทัดที่ 6 \[Output\] "4\. DECEIT"
* บรรทัดที่ 7 \[Output\] "5\. STAXEL"
* บรรทัดที่ 8 \[Input\] "\>\> Please select the number of games you want: " ป้อนหมายเลขของเกมที่ลูกค้าต้องการ
* บรรทัดที่ 9 \[Output\] "You choose \"ชื่อเกมที่ลูกค้าเลือก\" and price ราคาเกมนั้น baht\." โปรแกรมจะแสดงรายชื่อเกมที่ลูกค้าเลือก และแสดงราคาของเกมนั้น
* บรรทัดที่ 10 \[Input\] "\>\> Do you want anything else?\(y=1,n=0\): " ป้อนหมายเลขว่าต้องซื้อเกมเพิ่มอีกหรือไม่ โดย\"ใช่\"ป้อนเลข 1 และ\"ไม่ใช่\"ป้อนเลข 0
> ถ้าลูกค้าป้อนเลข 0 โปรแกรมจะรันที่บรรทัดที่ 11 ทันที แต่ถ้าลูกค้าป้อนเลข 1 โปรแกรมจะรันข้อความต่อไปนี้ จนกว่าลูกค้าจะป้อนเลข 0 ที่ข้อความจากบรรทัดที่ 10
>
> \[Input\] "\>\> Please select the number of games you want: " ป้อนหมายเลขของเกมที่ลูกค้าต้องการ
>
> \[Output\] "You choose \"ชื่อเกมที่ลูกค้าเลือก\" and price ราคาเกมนั้น baht\." โปรแกรมจะแสดงรายชื่อเกมที่ลูกค้าเลือก และแสดงราคาของเกมนั้น
>
> \[Input\] "\>\> Do you want anything else?\(y=1,n=0\): " ป้อนหมายเลขว่าต้องซื้อเกมเพิ่มอีกหรือไม่ โดย\"ใช่\"ป้อนเลข 1 และ\"ไม่ใช่\"ป้อนเลข 0
* บรรทัดที่ 11 \[Output\] "You buy จำนวนเกมที่ซื้อ games and total price is ราคารวมของเกมที่ซื้อทั้งหมด baht\." โปรแกรมจะแสดงจำนวนเกมที่ลูกค้าซื้อ และราคารวมทั้งหมดที่ลูกค้าจะต้องจ่าย
___
### Input/Output
**Input/Output 1**

Hello, Welcome to games store\.

Now we have 5 interesting games\.

1\. PUBG

2\. OVERWATCH

3\. THE SIMS4

4\. DECEIT

5\. STAXEL

\>\> Please select the number of games you want: 2

You choose \"OVERWATCH\" and price 1400 baht\.

\>\> Do you want anything else?\(y=1,n=0\): 1

\>\> Please select the number of games you want: 1

You choose \"PUBG\" and price 559 baht\.

\>\> Do you want anything else?\(y=1,n=0\): 0

You buy 2 games and total price is 1959 baht\.



**Input/Output 2**

Hello, Welcome to games store\.

Now we have 5 interesting games\.

1\. PUBG

2\. OVERWATCH

3\. THE SIMS4

4\. DECEIT

5\. STAXEL

\>\> Please select the number of games you want: 1

You choose \"PUBG\" and price 559 baht\.

\>\> Do you want anything else?\(y=1,n=0\): 1

\>\> Please select the number of games you want: 2

You choose \"OVERWATCH\" and price 1400 baht\.

\>\> Do you want anything else?\(y=1,n=0\): 1

\>\> Please select the number of games you want: 3

You choose \"THE SIMS4\" and price 1000 baht\.

\>\> Do you want anything else?\(y=1,n=0\): 1

\>\> Please select the number of games you want: 5

You choose \"STAXEL\" and price 350 baht\.

\>\> Do you want anything else?\(y=1,n=0\): 0

You buy 4 games and total price is 3309 baht\.