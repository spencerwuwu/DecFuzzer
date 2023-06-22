#ifndef s795retdec_H
#define s795retdec_H

#include "w2c2_base.h"

typedef struct s795retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s795retdecInstance;

void f0(s795retdecInstance*);

void f1(s795retdecInstance*);

U32 f2(s795retdecInstance*);

void f3(s795retdecInstance*,U32);

U32 f4(s795retdecInstance*,U32,U32,U32);

void f5(s795retdecInstance*,U32,U32,U32,U32,U32);

void f6(s795retdecInstance*,U32);

void f7(s795retdecInstance*,U32,U32,U32);

void f8(s795retdecInstance*,U32,U32,U32);

void s795retdec____wasm_call_ctors(s795retdecInstance*i);

void s795retdec____wasm_apply_data_relocs(s795retdecInstance*i);

U32 s795retdec_func_1(s795retdecInstance*i);

void s795retdec_call_cb(s795retdecInstance*i,U32 l0);

void s795retdecInstantiate(s795retdecInstance* instance, void* resolve(const char* module, const char* name));

void s795retdecFreeInstance(s795retdecInstance* instance);

#endif /* s795retdec_H */

