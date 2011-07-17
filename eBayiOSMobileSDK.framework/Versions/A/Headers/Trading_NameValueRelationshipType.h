//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Information about a parent name-value pair. Currently used to indicate
 relationships betweenItem Specifics.
 
 
 @ingroup Trading
*/
@interface Trading_NameValueRelationshipType : NSObject <EbayNs_Bindable> {

@private
    NSString *parentName;
    NSString *parentValue;

}


/**
 
 The name of another Item Specific that the current value depends on.
 For example, in a clothing category, "Size Type" could be recommended 
 as a parent of Size.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *parentName;

/**
 
 The value of another Item Specific that the current value depends on.
 For example, in a clothing category, if "Size Type" is the ParentName,
 then "Petite" could be recommended as a parent value for Size=Medium.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *parentValue;



@end