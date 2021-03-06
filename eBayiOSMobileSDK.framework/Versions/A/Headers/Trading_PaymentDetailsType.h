//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Data associated with payment (payment durations).
 
 
 @ingroup Trading
*/
@interface Trading_PaymentDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *hoursToDeposit;
    NSNumber *daysToFullPayment;

}


/**
 
 Applies to US eBay Motors site (except Parts and Accessories category).
 Number of hours after a listing closes that the buyer can put down a deposit
 on an item (if the seller specified a deposit).
 Only takes effect if listing also includes the
 Deposit Amount and Deposit Type attributes (see AttributeSetArray).
 The choices are 24, 48, and 72, and the default is 48.
 Deposits can only be paid using PayPal, so the listing must offer
 PayPal as a payment method (in addition to the payment methods
 offered for the full payment).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *hoursToDeposit;

/**
 
 Applies to vehicle categories on the US and Canada eBay Motors sites
 (not Parts and Accessories categories).
 Number of days after a listing closes that the buyer can take to pay
 the full cost of the vehicle. The choices are 3, 7, 10, and 14,
 and the default is 7. PayPal and credit cards cannot be used
 to pay the full cost of a vehicle, so the listing must
 offer MOCC (cashier's check), PersonalCheck, LoanCheck, CashInPerson,
 and/or PaymentSeeDescription as payment methods.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *daysToFullPayment;



@end
