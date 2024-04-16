rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testLongChar.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultLongChar.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Long Char - FAIL"
  else
    echo "Long Char - PASS"
  fi 
else
  echo "Long Char - FAIL (MISSING FILE)"
fi
