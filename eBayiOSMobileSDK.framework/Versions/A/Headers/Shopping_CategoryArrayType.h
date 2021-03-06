//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Shopping_CategoryType;

/**
 
 Container for a list of categories.
 
 
 @ingroup Shopping
*/
@interface Shopping_CategoryArrayType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *category;

}


/**
 
 Contains details about a category.
 
 
 entry type : class Shopping_CategoryType
*/
@property (nonatomic, retain) NSMutableArray *category;


@end
