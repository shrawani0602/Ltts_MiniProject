/**
 * @file fun.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUN_H__
#define __FUN_H__
#include<Windows.h> 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
/**
 * @brief 
 * 
 * @param acc 
 * @param numberOfAccounts 
 */
void registeration(struct bank *acc, int *numberOfAccounts);

/**
 * @brief 
 * 
 * @param acc 
 * @param numberOfAccounts 
 */
void detail(struct bank *acc, int *numberOfAccounts);
/**
 * @brief 
 * 
 * @param account 
 * @param numberOfAccounts 
 * @return int 
 */
int searching(struct bank *account, int *numberOfAccounts);
/**
 * @brief 
 * 
 * @param account 
 * @param numberOfAccounts 
 */
void update(struct bank *account, int *numberOfAccounts);
/**
 * @brief 
 * 
 * @param account 
 * @param numberOfAccounts 
 */
void deregister(struct bank *account, int *numberOfAccounts);
/**
 * @brief 
 * 
 * @param account 
 * @param numberOfAccounts 
 */
void sorting(struct bank *account, int *numberOfAccounts);


#endif
