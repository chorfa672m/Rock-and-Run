//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Fields in this type provide IDs and values for item conditions 
 (in GetCategoryFeatures).
 
 
 @ingroup Trading
*/
@interface Trading_ConditionType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *id;
    NSString *displayName;

}


/**
 
 The numeric ID of a condition (e.g., 1000). Use the ID in 
 AddItem and related calls.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *id;

/**
 
 The human-readable label for the condition (e.g., "New"). 
 This value is typically localized for each site. 
 The display name can vary by category. 
 For example, condition ID 1000 could be called
 "New: with Tags" in one category and "Brand New" in another.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *displayName;



@end
