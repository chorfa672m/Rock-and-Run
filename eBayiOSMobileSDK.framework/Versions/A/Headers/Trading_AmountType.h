//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Basic type for specifying monetary amounts. A double value (e.g.,
 1.00 or 1.0) is meaningful as a monetary amount when accompanied by a
 specification of the currency, in which case the value specifies
 the amount in that currency. An AmountType expresses both the value
 (a double) and the currency. Details such as prices, fees, costs,
 and payments are specified as amount types.
 
 
 @ingroup Trading
*/
@interface Trading_AmountType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *value;
    NSString *currencyID;

}


/**
 (public property)
 
 type : NSNumber, wrapper for primitive double
*/
@property (nonatomic, retain) NSNumber *value;

/**
 (public property)
 
 type: string constant in Trading_CurrencyCodeType.h
*/
@property (nonatomic, retain) NSString *currencyID;


@end
