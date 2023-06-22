#ifndef s261retdec_H
#define s261retdec_H

#include "w2c2_base.h"

typedef struct s261retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s261retdecInstance;

void f0(s261retdecInstance*);

void f1(s261retdecInstance*);

U32 f2(s261retdecInstance*);

void f3(s261retdecInstance*,U32);

U32 f4(s261retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s261retdecInstance*,U32,U32,U32,U32,U32);

void f6(s261retdecInstance*,U32);

void f7(s261retdecInstance*,U32,U32,U32);

void f8(s261retdecInstance*,U32,U32,U32);

void s261retdec____wasm_call_ctors(s261retdecInstance*i);

void s261retdec____wasm_apply_data_relocs(s261retdecInstance*i);

U32 s261retdec_func_1(s261retdecInstance*i);

void s261retdec_call_cb(s261retdecInstance*i,U32 l0);

void s261retdecInstantiate(s261retdecInstance* instance, void* resolve(const char* module, const char* name));

void s261retdecFreeInstance(s261retdecInstance* instance);

#endif /* s261retdec_H */

