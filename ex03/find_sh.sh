find . -type f -name "*.sh" -execdir echo {} ';' | sed "s/\.sh//g"
