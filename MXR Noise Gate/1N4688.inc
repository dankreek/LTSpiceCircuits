******
* Spice Model
* Item: 1N4688
* Date: 12/12/11
* Revision History: REV A
*==========================================================
* This model was developed by: 
* Central Semiconductor Corp.
* 145 Adams Avenue
* Hauppauge, NY 11788
*
* These models are subject to change without notice.
* Users may not directly or indirectly re-sell or 
* re-distribute this model. This model may not 
* be modified, or altered without the consent of Central Semiconductor Corp. 
*
* For more information on this model contact
* Central Semiconductor Corp. at:
* (631) 435-1110 or Engineering@centralsemi.com
* http://www.centralsemi.com
**==========================================================
******
*SRC=1N4688;1N4688;Diodes;Zener <=10V;4.70V  0.500W  Central Semi Central Semi
*SYM=HZEN
.SUBCKT 1N4688  1 2
*        Terminals    A   K
D1 1 2 DF
DZ 3 1 DR
VZ 2 3 2.73
.MODEL DF D ( IS=43.8p RS=8.86 N=1.10
+ CJO=112p VJ=0.750 M=0.330 TT=50.1n )
.MODEL DR D ( IS=8.77f RS=4.45k N=3.00 )
.ENDS
******