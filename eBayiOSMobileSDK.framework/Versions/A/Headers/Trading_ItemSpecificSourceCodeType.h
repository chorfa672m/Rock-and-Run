//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Defines the system source for an Item Specific.
 
 
 @ingroup Trading
*/

/**
 
 The Item Specific was originally stored with custom
 Item Specifics fields. (For example, the seller used
 the ItemSpecifics node in AddItem.)
 This is the default setting if Source isn't returned.
 
*/
extern NSString *const Trading_ItemSpecificSourceCodeType_ITEM_SPECIFIC;

/**
 
 The Item Specific was originally stored with eBay's
 system-defined (ID-based) attributes format. (For example,
 the seller used the AttributeSetArray node in AddItem 
 at a time when the category supported Attributes.)
 
*/
extern NSString *const Trading_ItemSpecificSourceCodeType_ATTRIBUTE;

/**
 
 The Item Specific is prefilled from a product catalog. (For example,
 the seller used ExternalProductID or ProductID in AddItem.)
 
*/
extern NSString *const Trading_ItemSpecificSourceCodeType_PRODUCT;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_ItemSpecificSourceCodeType_CUSTOM_CODE;
  
