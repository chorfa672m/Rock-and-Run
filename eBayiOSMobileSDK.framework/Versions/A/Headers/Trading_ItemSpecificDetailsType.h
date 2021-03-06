//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Details about custom Item Specifics validation rules.
 
 
 @ingroup Trading
*/
@interface Trading_ItemSpecificDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *maxItemSpecificsPerItem;
    NSNumber *maxValuesPerName;
    NSNumber *maxCharactersPerValue;
    NSNumber *maxCharactersPerName;
    NSString *detailVersion;
    NSDate *updateTime;

}


/**
 
 The maximum number of custom Item Specifics allowed
 when you list an item. Also the maximum returned per category in
 GetCategorySpecifics and GetItemRecommendations. <br>
 <br>
 Related fields:<br>
 Item.ItemSpecifics in AddItem<br>
 ItemSpecifics in GetCategorySpecifics<br>
 ItemSpecifics in GetItemRecommendations<br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxItemSpecificsPerItem;

/**
 
 The maximum number of values returned for each custom Item Specific
 in GetCategorySpecifics and GetItemRecommendations.<br>
 <br>
 Related fields:<br>
 ItemSpecifics in GetCategorySpecifics<br>
 ItemSpecifics in GetItemRecommendations<br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxValuesPerName;

/**
 
 The maximum number of characters the site supports per custom
 Item Specific value.<br>
 <br>
 Related fields:<br>
 Item.ItemSpecifics in AddItem<br>
 ItemSpecifics in GetCategorySpecifics<br>
 ItemSpecifics in GetItemRecommendations<br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxCharactersPerValue;

/**
 
 The maximum number of characters the site supports per custom
 Item Specific name.<br>
 <br>
 Related fields:<br>
 Item.ItemSpecifics in AddItem<br>
 ItemSpecifics in GetCategorySpecifics<br>
 ItemSpecifics in GetItemRecommendations<br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxCharactersPerName;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 details were last updated. This timestamp can be used to determine
 if and when to refresh cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;



@end
