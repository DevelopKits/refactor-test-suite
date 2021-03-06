# CLion

Home: [CLion](https://www.jetbrains.com/clion/)

Version: CL-140-1221.2

Notes:

Methodology: Default suggestions are selected when refactoring.  Some
refactorings can be performed successfully if suggestions are excluded.

**Add Block Delimiter** is performed by selecting the code and performing
Code / Surround With... / {}.

**Add Parameter** is performed with **Change Signature**.

**Create Setter Method** is performed with Code / Generate... / Setter.

**Flatten Conditional** is performed by repeatedly applying the fixup Merge
Nested Ifs.

**Replace If With Ternary** is performed by applying the fixup Replace
'if else' with '?:'.

**Replace Ternary With If** is performed by applying the fixup Replace
'?;' with 'if else'.

<hr/>

## Add Block Delimiter
Case | Result
---- | ------
ABD1 |  Pass
ABD2 |  Pass
ABD3 |  Pass
ABD4 |  Pass
ABD5 |  Pass
ABD6 |  Pass
ABD7 |  Pass

## Add Override (not available) [CPP-1953](https://youtrack.jetbrains.com/issue/CPP-1953)

## Change Signature
Case | Result
---- | ------
CS1  |  Pass
CS2  |  Pass
CS3  |  Pass
CS4  |  Pass
CS5  |  Pass
CS6  |  Pass
CS7  |  Pass
CS8  |  Pass
CS9  |  Pass
CS10 |  Pass
CS11 |  Pass

## Create Declaration From Implementation

## Create Implementation From Declaration

## Create Method Stub
Case | Result
---- | ------
CMS1  | Pass
CMS2  | Pass
CMS3  | Pass
CMS4  | Failure [CPP-1601](https://youtrack.jetbrains.com/issue/CPP-1601)
CMS5  | Failure [CPP-1601](https://youtrack.jetbrains.com/issue/CPP-1601)
CMS6  | Pass
CMS7  | Pass
CMS8  | Failure (not available) [CPP-1908](https://youtrack.jetbrains.com/issue/CPP-1908)
CMS9  | Failure (not available) [CPP-1908](https://youtrack.jetbrains.com/issue/CPP-1908)
CMS10 | Failure (not available) [CPP-1908](https://youtrack.jetbrains.com/issue/CPP-1908)
CMS11 | Pass
CMS12 | Failure [CPP-1909](https://youtrack.jetbrains.com/issue/CPP-1909)
CMS13 | Pass
CMS14 | Pass
CMS15 | Failure [CPP-1910](https://youtrack.jetbrains.com/issue/CPP-1910)
CMS16 | Failure [CPP-1911](https://youtrack.jetbrains.com/issue/CPP-1911)
CMS17 | Pass
CMS18 | Failure [CPP-1911](https://youtrack.jetbrains.com/issue/CPP-1911)
CMS19 | Pass
CMS20 | Failure [CPP-1911](https://youtrack.jetbrains.com/issue/CPP-1911)
CMS21 | Pass
CMS22 | Pass

## Create Setter Method
Case | Result
---- | ------
CSM1  | Pass
CSM2  | Pass
CSM3  | Pass
CSM4  | Failure [CPP-1912](https://youtrack.jetbrains.com/issue/CPP-1912)
CSM5  | Pass
CSM6  | Pass
CSM7  | Pass
CSM8  | Failure [CPP-1912](https://youtrack.jetbrains.com/issue/CPP-1912)
CSM9  | Pass
CSM10 | Pass
CSM11 | Pass
CSM12 | Pass
CSM13 | Pass
CSM14 | Failure [CPP-1912](https://youtrack.jetbrains.com/issue/CPP-1912)
CSM15 | Failure [CPP-1912](https://youtrack.jetbrains.com/issue/CPP-1912)
CSM16 | Failure [CPP-1912](https://youtrack.jetbrains.com/issue/CPP-1912)
CSM17 | Failure [CPP-1913](https://youtrack.jetbrains.com/issue/CPP-1913)
CSM18 | Failure [CPP-1913](https://youtrack.jetbrains.com/issue/CPP-1913)
CSM19 | Pass
CSM20 | Pass
CSM21 | Pass
CSM22 | Pass
CSM23 | Pass
CSM24 | Pass
CSM25 | Pass
CSM26 | Pass
CSM27 | Failure [CPP-1914](https://youtrack.jetbrains.com/issue/CPP-1914)
CSM28 | Failure [CPP-1914](https://youtrack.jetbrains.com/issue/CPP-1914)
CSM30 | Pass
CSM31 | Failure [CPP-1914](https://youtrack.jetbrains.com/issue/CPP-1914)

## Extract Constant
Case | Result
---- | ------
EC1   | Failure [CPP-1926](https://youtrack.jetbrains.com/issue/CPP-1926)
EC2   | Failure [CPP-1927](https://youtrack.jetbrains.com/issue/CPP-1927)
EC3   | Failure [CPP-1926](https://youtrack.jetbrains.com/issue/CPP-1926)
EC4   | Failure [CPP-1927](https://youtrack.jetbrains.com/issue/CPP-1927)
EC5   | Failure [CPP-1928](https://youtrack.jetbrains.com/issue/CPP-1928)
EC6   | Pass
EC7   | Failure [CPP-1929](https://youtrack.jetbrains.com/issue/CPP-1929), [CPP-1930](https://youtrack.jetbrains.com/issue/CPP-1930)
EC8   | Pass
EC9   | Failure [CPP-1928](https://youtrack.jetbrains.com/issue/CPP-1928)
EC10  | Pass
EC11  | Failure [CPP-1929](https://youtrack.jetbrains.com/issue/CPP-1929), [CPP-1930](https://youtrack.jetbrains.com/issue/CPP-1930)
EC12  | Failure [CPP-1926](https://youtrack.jetbrains.com/issue/CPP-1926)
EC13  | Failure [CPP-1926](https://youtrack.jetbrains.com/issue/CPP-1926)

## Extract Declaration

## Extract Define

## Extract Function
Case | Result
---- | ------
EXF1  | Pass
EXF2  | Pass
EXF3  | Pass
EXF4  | Pass
EXF5  | Pass
EXF6  | Pass
EXF7  | Pass
EXF8  | Pass
EXF9  | Pass
EXF10 | Pass
EXF11 | Pass
EXF12 | Pass
EXF13 | Pass
EXF14 | Failure [CPP-1915](https://youtrack.jetbrains.com/issue/CPP-1915)
EXF15 | Failure [CPP-1915](https://youtrack.jetbrains.com/issue/CPP-1915)
EXF16 | Failure [CPP-1915](https://youtrack.jetbrains.com/issue/CPP-1915)
EXF17 | Failure [CPP-1915](https://youtrack.jetbrains.com/issue/CPP-1915)
EXF18 | Failure [CPP-1916](https://youtrack.jetbrains.com/issue/CPP-1916)
EXF19 | Pass

## Extract Variable
Case | Result
---- | ------
EXV1   | Failure [CPP-1931](https://youtrack.jetbrains.com/issue/CPP-1931)
EXV2   | Pass
EXV3   | Pass
EXV4   | Pass
EXV5   | Pass
EXV6   | Failure [CPP-1932](https://youtrack.jetbrains.com/issue/CPP-1932)

## Extract Method
Case | Result
---- | ------
EM1   | Pass
EM2   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM3   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM4   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM5   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM6   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM7   | Pass
EM8   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM9   | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM10  | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM11  | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM12  | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)
EM13  | Failure [CPP-1918](https://youtrack.jetbrains.com/issue/CPP-1918)
EM14  | Pass
EM15  | Failure [CPP-1919](https://youtrack.jetbrains.com/issue/CPP-1919)
EM16  | Failure [CPP-1919](https://youtrack.jetbrains.com/issue/CPP-1919)
EM17  | Failure [CPP-1919](https://youtrack.jetbrains.com/issue/CPP-1919)
EM18  | Failure [CPP-1919](https://youtrack.jetbrains.com/issue/CPP-1919)
EM19  | Failure [CPP-352](https://youtrack.jetbrains.com/issue/CPP-352)
EM20  | Failure [CPP-1917](https://youtrack.jetbrains.com/issue/CPP-1917)

## Extract Parameter
Case | Result
---- | ------
EP1   | Failure [CPP-1920](https://youtrack.jetbrains.com/issue/CPP-1920)
EP2   | Pass
EP3   | Failure (should not be available) [CPP-1921](https://youtrack.jetbrains.com/issue/CPP-1921)
EP4   | Pass
EP5   | Failure [CPP-1920](https://youtrack.jetbrains.com/issue/CPP-1920)
EP6   | Pass

## Extract Typedef

## Extract Variable

## Flatten Conditional
Case | Result
---- | ------
FC1   | Pass

## Inline Constant

## Inline Function

## Inline Macro
Case | Result
---- | ------
IM1   | Failure [CPP-1922](https://youtrack.jetbrains.com/issue/CPP-1922)
IM2   | Pass
IM3   | Pass
IM4   | Pass
IM5   | Pass
IM6   | Pass

## Inline Method

## Inline Recent Assignment
Case | Result
---- | ------
IRA1  | Failure (not available) [CPP-1923](https://youtrack.jetbrains.com/issue/CPP-1923)
IRA2  | Failure (not available) [CPP-1923](https://youtrack.jetbrains.com/issue/CPP-1923)

## Inline Result
Case | Result
---- | ------
IR1   | Failure [CPP-1924](https://youtrack.jetbrains.com/issue/CPP-1924)
IR2   | Failure [CPP-1924](https://youtrack.jetbrains.com/issue/CPP-1924)
IR3   | Failure [CPP-1924](https://youtrack.jetbrains.com/issue/CPP-1924)
IR4   | Failure [CPP-1924](https://youtrack.jetbrains.com/issue/CPP-1924)
IR5   | Failure [CPP-1924](https://youtrack.jetbrains.com/issue/CPP-1924)

## Inline Typedef

## Inline Variable
Case | Result
---- | ------
IV1   | Pass
IV2   | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV3   | Pass
IV4   | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV5   | Failure
IV6   | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV7   | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV8   | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV9   | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV10  | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV11  | Failure (not available) [CPP-1925](https://youtrack.jetbrains.com/issue/CPP-1925)
IV12  | Failure (not available) [CPP-2252](https://youtrack.jetbrains.com/issue/CPP-2252)

## Move Method
Case | Result
---- | ------
MM1   | Pass
MM2   | Pass
MM3   | Pass
MM4   | Pass
MM5   | Pass
MM6   | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM7   | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM8   | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM9   | Pass
MM10  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM11  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM12  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM13  | Pass
MM14  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM15  | Pass
MM16  | Failure [CPP-1934](https://youtrack.jetbrains.com/issue/CPP-1934)
MM17  | Pass
MM18  | Pass
MM19  | Failure [CPP-1934](https://youtrack.jetbrains.com/issue/CPP-1934)
MM20  | Pass
MM21  | Failure [CPP-1934](https://youtrack.jetbrains.com/issue/CPP-1934)
MM22  | Failure [CPP-1934](https://youtrack.jetbrains.com/issue/CPP-1934)
MM23  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM24  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM25  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM26  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM27  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM28  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM29  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM30  | Failure [CPP-1933](https://youtrack.jetbrains.com/issue/CPP-1933)
MM31  | Failure [CPP-1935](https://youtrack.jetbrains.com/issue/CPP-1935)
MM32  | Failure [CPP-1935](https://youtrack.jetbrains.com/issue/CPP-1935)
MM33  | Failure [CPP-1935](https://youtrack.jetbrains.com/issue/CPP-1935)
MM34  | Failure [CPP-1935](https://youtrack.jetbrains.com/issue/CPP-1935)
MM35  | Failure [CPP-1936](https://youtrack.jetbrains.com/issue/CPP-1936)
MM36  | Failure [CPP-1934](https://youtrack.jetbrains.com/issue/CPP-1934)

## Pull Members Up

## Push Members Down

## Remove Block Delimiter (unavailable) [CPP-1937](https://youtrack.jetbrains.com/issue/CPP-1937)
Case | Result
---- | ------
RBD1  | Failure (not available)
RBD2  | Failure (not available)
RBD3  | Pass
RBD4  | Failure (not available)
RBD5  | Failure (not available)
RBD6  | Failure (not available)
RBD7  | Pass
RBD8  | Pass

## Remove Unused Parameter
Case | Result
---- | ------
RUP1  | Pass
RUP2  | Pass
RUP3  | Pass

## Rename
Case | Result
---- | ------
R1    | Failure [CPP-1938](https://youtrack.jetbrains.com/issue/CPP-1938)
R2    | Failure [CPP-1938](https://youtrack.jetbrains.com/issue/CPP-1938)
R3    | Failure [CPP-1938](https://youtrack.jetbrains.com/issue/CPP-1938)
R4    | Pass
R5    | Pass
R6    | Pass
R7    | Failure [CPP-1939](https://youtrack.jetbrains.com/issue/CPP-1939)
R8    | Failure [CPP-1939](https://youtrack.jetbrains.com/issue/CPP-1939)
R9    | Pass
R10   | Pass
R11   | Failure (not available) [CPP-1940](https://youtrack.jetbrains.com/issue/CPP-1940)
R12   | Failure (not available) [CPP-1940](https://youtrack.jetbrains.com/issue/CPP-1940)
R13   | Pass
R14   | Pass
R15   | Failure [CPP-1939](https://youtrack.jetbrains.com/issue/CPP-1939)
R16   | Pass
R17   | Failure [CPP-1941](https://youtrack.jetbrains.com/issue/CPP-1941)
R18   | Pass
R19   | Failure [CPP-1939](https://youtrack.jetbrains.com/issue/CPP-1939)
R20   | Pass
R21   | Pass
R22   | Pass
R23   | Pass
R24   | Pass
R25   | Pass
R26   | Pass
R27   | Pass
R28   | Pass
R29   | Pass
R30   | Pass
R31   | Pass
R32   | Failure [CPP-1939](https://youtrack.jetbrains.com/issue/CPP-1939)
R33   | Failure [CPP-1938](https://youtrack.jetbrains.com/issue/CPP-1938)
R34   | Pass
R35   | Pass
R36   | Failure [CPP-1939](https://youtrack.jetbrains.com/issue/CPP-1939)
R37   | Pass
R38   | Pass
R39   | Pass
R40   | Pass
R41   | Pass
R42   | Pass
R43   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R44   | Pass
R45   | Pass
R46   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R47   | Pass
R48   | Pass
R49   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R50   | Pass
R51   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R52   | Pass
R53   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R54   | Pass
R55   | Pass
R56   | Pass
R57   | Pass
R58   | Pass
R59   | Pass
R60   | Pass
R61   | Pass
R62   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R63   | Pass
R64   | Pass
R65   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R66   | Pass
R67   | Pass
R68   | Pass
R69   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R70   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R71   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R72   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R73   | Pass (unrelated comments selected by default) [CPP-1942](https://youtrack.jetbrains.com/issue/CPP-1942)
R74   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R75   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R76   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R77   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R78   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R79   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R80   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R81   | Failure (selects unrelated macro by default) [CPP-1943](https://youtrack.jetbrains.com/issue/CPP-1943)
R82   | Pass
R83   | Pass
R84   | Pass
R85   | Pass
R86   | Pass
R87   | Pass
R88   | Pass
R89   | Pass
R90   | Pass
R91   | n/a
R92   | n/a
R93   | Pass
R94   | Pass
R95   | Pass
R96   | Pass
R97   | Pass
R98   | Failure [CPP-1941](https://youtrack.jetbrains.com/issue/CPP-1941)

## Reorder Parameters

## Replace auto_ptr With unique_ptr (not available) [CPP-1954](https://youtrack.jetbrains.com/issue/CPP-1954)

## Replace If With Ternary
Case | Result
---- | ------
RIT1  | Pass
RIT2  | Failure (not available) [CPP-1944](https://youtrack.jetbrains.com/issue/CPP-1944)
RIT3  | Failure (not available) [CPP-1944](https://youtrack.jetbrains.com/issue/CPP-1944)
RIT4  | Failure (not available) [CPP-1944](https://youtrack.jetbrains.com/issue/CPP-1944)
RIT5  | Pass
RIT6  | Pass
RIT7  | Pass
RIT8  | Pass
RIT9  | Failure [CPP-1945](https://youtrack.jetbrains.com/issue/CPP-1945)

## Replace Iterative For With Range For (not available) [CPP-1952](https://youtrack.jetbrains.com/issue/CPP-1952)

## Replace NULL/0 With nullptr (not available) [CPP-1955](https://youtrack.jetbrains.com/issue/CPP-1955)

## Replace Ternary With If
Case | Result
---- | ------
RTI1  | Pass
RTI2  | Failure [CPP-1946](https://youtrack.jetbrains.com/issue/CPP-1946)
RTI3  | Pass
RTI4  | Pass
RTI5  | Failure [CPP-1946](https://youtrack.jetbrains.com/issue/CPP-1946)
RTI6  | Pass
RTI7  | Pass
RTI8  | Pass
RTI9  | Pass

## Replace Type With auto (not available) [CPP-1956](https://youtrack.jetbrains.com/issue/CPP-1956)

## Simplify Boolean Expression
Case | Result
---- | ------
SB1   | Pass
SB2   | Pass
SB3   | Pass
SB4   | Pass
SB5   | Pass
SB6   | Pass
SB7   | Pass
SB8   | Pass
SB9   | Pass
SB10  | Pass
SB11  | Pass
SB12  | Pass
SB13  | Pass

## Split Initialization From Declaration
Case | Result
---- | ------
SID1  | Pass
SID2  | Failure [CPP-1947](https://youtrack.jetbrains.com/issue/CPP-1947)
SID3  | Pass
SID4  | Pass
SID5  | Pass
SID6  | Pass
SID7  | Pass
SID8  | Pass
SID9  | Pass
SID10 | Pass
SID11 | Failure (not available) [CPP-1948](https://youtrack.jetbrains.com/issue/CPP-1948)

## Split Multi-Variable Declaration
Case | Result
---- | ------
SMVD1  | Pass
SMVD2  | Pass
SMVD3  | Pass
SMVD4  | Pass
SMVD5  | Pass
SMVD6  | Pass
SMVD7  | Pass
SMVD8  | Pass
SMVD9  | Pass
SMVD10 | Pass
SMVD11 | Pass
SMVD12 | Pass
SMVD13 | Pass
SMVD14 | Pass
SMVD15 | Pass
SMVD16 | Pass
SMVD17 | Pass
SMVD18 | Pass
SMVD19 | Pass
