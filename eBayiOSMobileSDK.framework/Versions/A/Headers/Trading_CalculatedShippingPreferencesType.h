//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_AmountType;

/**
 
 Calculated shipping preferences for the user.
 
 
 @ingroup Trading
*/
@interface Trading_CalculatedShippingPreferencesType : NSObject <EbayNs_Bindable> {

@private
    Trading_AmountType *calculatedShippingAmountForEntireOrder;
    NSString *calculatedShippingChargeOption;
    NSString *calculatedShippingRateOption;
    NSString *insuranceOption;

}


/**
 
 The calculated shipping amount for the entire order.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *calculatedShippingAmountForEntireOrder;

/**
 
 Specifies whether to charge the actual shipping and handling cost for the
 entire order or for each item.
 
 
 type: string constant in Trading_CalculatedShippingChargeOptionCodeType.h
*/
@property (nonatomic, retain) NSString *calculatedShippingChargeOption;

/**
 
 Specifies whether to calculate the actual rate shipping based on the combined
 item weight or the individual item weight.
 
 
 type: string constant in Trading_CalculatedShippingRateOptionCodeType.h
*/
@property (nonatomic, retain) NSString *calculatedShippingRateOption;

/**
 
 Whether the seller offers shipping insurance and, if so, whether the insurance is
 optional or required. Applies to both flat and calculated shipping.
 <br><br>
 This field is always returned with a request version lower than 635. With a
 request version of 635 or higher, this field is only returned if the value is
 other than NotOffered.
 <br><br>
 Valid only on the following eBay sites: AU, FR, IT, and IN.
 
 
 type: string constant in Trading_InsuranceOptionCodeType.h
*/
@property (nonatomic, retain) NSString *insuranceOption;



@end
