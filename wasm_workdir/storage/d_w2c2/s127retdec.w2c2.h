#ifndef s127retdec_H
#define s127retdec_H

#include "w2c2_base.h"

typedef struct s127retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s127retdecInstance;

void f0(s127retdecInstance*);

void f1(s127retdecInstance*);

U32 f2(s127retdecInstance*);

void f3(s127retdecInstance*,U32);

U32 f4(s127retdecInstance*,U32,U32,U32);

void f5(s127retdecInstance*,U32,U32,U32,U32,U32);

void f6(s127retdecInstance*,U32);

void f7(s127retdecInstance*,U32,U32,U32);

void f8(s127retdecInstance*,U32,U32,U32);

void s127retdec____wasm_call_ctors(s127retdecInstance*i);

void s127retdec____wasm_apply_data_relocs(s127retdecInstance*i);

U32 s127retdec_func_1(s127retdecInstance*i);

void s127retdec_call_cb(s127retdecInstance*i,U32 l0);

void s127retdecInstantiate(s127retdecInstance* instance, void* resolve(const char* module, const char* name));

void s127retdecFreeInstance(s127retdecInstance* instance);

#endif /* s127retdec_H */

