BEGIN [ตรวจสอบเกรด]
INPUT  score
IF score >= 80 THEN เกรด = A
    ELSE IF score >= 70 THEN เกรด = B

    ELSE IF score >= 60 THEN เกรด = C

    ELSE IF score >= 50 THEN เกรด = D

    ELSE เกรด = B

OUTPUT เกรด

END

BEGIN [หาค่าสูงสุดจาก 2 ตัวเลข]
INPUT  a และ b
IF a > b THEN OUTPUT a

    ELSE OUTPUT b

END

BEGIN [หาค่าสูงสุดจาก 2 ตัวเลข]

INPUT N

i = 1

WHILE i<=N  DO print i

    i=i+1

END IF i>N
