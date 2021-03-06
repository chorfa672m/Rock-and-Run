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
 
 A pairing of range and insurance cost.
 
 
 @ingroup Trading
*/
@interface Trading_FlatRateInsuranceRangeCostType : NSObject <EbayNs_Bindable> {

@private
    NSString *flatRateInsuranceRange;
    Trading_AmountType *insuranceCost;

}


/**
 
 The price range for the shipment for which the insurance cost is being specified.
 
 
 type: string constant in Trading_FlatRateInsuranceRangeCodeType.h
*/
@property (nonatomic, retain) NSString *flatRateInsuranceRange;

/**
 
 The cost of insurance for the specified price range.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *insuranceCost;



@end
