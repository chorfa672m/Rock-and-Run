//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_ItemType;

/**
 
 Contains the item data returned by the call. The data for the specified item
 listing is returned in an ItemType object.
 
 
 @ingroup Trading
*/
@interface Trading_GetItemResponseType : Trading_AbstractResponseType {

@private
    Trading_ItemType *item;

}


/**
 
 ItemType object that contains the data for the specified item.
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;


@end
