echo "Количество аргументов: $#"

sum=0
for num in "$@"; do
    sum=$((sum + num)) 
done

average=$((sum / $#))

echo "Среднее арифметическое: $average"
