//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 The set of valid states for an order.
 
 
 @ingroup Trading
*/

/**
 
 The cart is active. Items can only be added, deleted, or updated in the cart
 when status is Active.
 
*/
extern NSString *const Trading_OrderStatusCodeType_ACTIVE;

/**
 
 The cart is invalid; it does not exist. An example is a cart that has expired.
 
*/
extern NSString *const Trading_OrderStatusCodeType_INACTIVE;

/**
 
 The order is completed.
 
*/
extern NSString *const Trading_OrderStatusCodeType_COMPLETED;

/**
 
 The cart was cancelled.
 
*/
extern NSString *const Trading_OrderStatusCodeType_CANCELLED;

/**
 
 The order was shipped. Half.com users
 can specify this in the GetOrders input.
 
*/
extern NSString *const Trading_OrderStatusCodeType_SHIPPED;

/**
 
 Default status.
 
*/
extern NSString *const Trading_OrderStatusCodeType_DEFAULT;

/**
 
 The cart was authenticated.
 
*/
extern NSString *const Trading_OrderStatusCodeType_AUTHENTICATED;

/**
 
 After placing the order and before completion of checkout,
 the card is "in process."
 
*/
extern NSString *const Trading_OrderStatusCodeType_IN_PROCESS;

/**
 
 Invalid.
 
*/
extern NSString *const Trading_OrderStatusCodeType_INVALID;

/**
 
 Reserved for internal or future use.
 
*/
extern NSString *const Trading_OrderStatusCodeType_CUSTOM_CODE;
  
