all:
	$(MAKE) -C level1
	$(MAKE) -C level2
	$(MAKE) -C level3

clean:
	$(MAKE) -C level1 clean
	$(MAKE) -C level2 clean
	$(MAKE) -C level3 clean

fclean:
	$(MAKE) -C level1 fclean
	$(MAKE) -C level2 fclean
	$(MAKE) -C level3 fclean

re: fclean all

.PHONY: all clean fclean re
