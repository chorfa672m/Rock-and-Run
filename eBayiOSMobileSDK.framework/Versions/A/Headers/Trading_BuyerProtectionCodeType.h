//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Indicates the status of the item's eligibility for the Buyer
 Protection Program.
 
 
 @ingroup Trading
*/

/**
 
 (out) Item is ineligible (e.g., category not applicable).
 
*/
extern NSString *const Trading_BuyerProtectionCodeType_ITEM_INELIGIBLE;

/**
 
 (out) Item is eligible per standard criteria.
 
*/
extern NSString *const Trading_BuyerProtectionCodeType_ITEM_ELIGIBLE;

/**
 
 (out) Item marked ineligible per special criteria (e.g., seller's account closed).
 
*/
extern NSString *const Trading_BuyerProtectionCodeType_ITEM_MARKED_INELIGIBLE;

/**
 
 (out) Item marked eligible per other criteria.
 
*/
extern NSString *const Trading_BuyerProtectionCodeType_ITEM_MARKED_ELIGIBLE;

/**
 
 (out) For the Australia site, indicates that there is 
 no PayPal Buyer Protection coverage.
 Coverage details would be in the following sections
 of the View Item page: the Buy Safely section and the Payment Details section.
 
*/
extern NSString *const Trading_BuyerProtectionCodeType_NO_COVERAGE;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Trading_BuyerProtectionCodeType_CUSTOM_CODE;
  
