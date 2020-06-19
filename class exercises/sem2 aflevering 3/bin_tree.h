//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	bin_tree.h
// Author: 		Jan K. Schiermer
// Created on: 	1 Apr 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#ifndef BIN_TREE_H_
#define BIN_TREE_H_
#include <stdbool.h>

#define MAX 50
struct sWord
{
	char word_in_struct[50];
};

typedef struct sWord item;

typedef struct tree
{
	item word;
	struct tree * th;
	struct tree * tv;
} Tree;

void init_tree(Tree * bin_tree);
//operation: 	init a pointer
//precon: 		bin_Tree points to a binary tree
//postcon:	 	the tree is init. to empty

void add_list(char list_name[], Tree * bin_tree);
//operation:	adds a list of words to the tree
//precon:		*list_pointer must point to a list
//				*bin_tree must be init. first
//postcon:		list added to bin_tree

void add_word(char word_to_Add[], Tree * bin_tree);
//operation:	adds a word to  bin_tree
//precon:		a binary tree must have been implemented first
//postcon:		-returns true if done
//				-returns false if not possible

void search_word(char word_to_search, Tree * bin_tree);
//operation:	search for a given word in bin_Tree, if found ask what to be done:
//				*add word
//				*delete word
//precon:		bin_tree must have been implemented first
//postcon:		does given action, and if word doesn't exist then says so

void delete_tree(Tree * bin_tree);
//operation:	deletes the binary tree
//precon:		bin_tree must have been implemented
//postcon:		all memory used for the bin_tree has been released (free())

#endif /* BIN_TREE_H_ */
