cat/etc/passwd:wq




|sed '/^#/d'|awk-F":"'{print$1}'|awk
