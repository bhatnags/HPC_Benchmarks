exec /usr/lib/rpm/redhat/find-requires "$@" | egrep -v '^libpmix.so|libevent'
