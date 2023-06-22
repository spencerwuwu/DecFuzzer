#ifndef s485retdec_H
#define s485retdec_H

#include "w2c2_base.h"

typedef struct s485retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s485retdecInstance;

void f0(s485retdecInstance*);

void f1(s485retdecInstance*);

U32 f2(s485retdecInstance*);

void f3(s485retdecInstance*,U32);

U32 f4(s485retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s485retdecInstance*,U32,U32,U32,U32,U32);

void f6(s485retdecInstance*,U32);

void f7(s485retdecInstance*,U32,U32,U32);

void f8(s485retdecInstance*,U32,U32,U32);

void s485retdec____wasm_call_ctors(s485retdecInstance*i);

void s485retdec____wasm_apply_data_relocs(s485retdecInstance*i);

U32 s485retdec_func_1(s485retdecInstance*i);

void s485retdec_call_cb(s485retdecInstance*i,U32 l0);

void s485retdecInstantiate(s485retdecInstance* instance, void* resolve(const char* module, const char* name));

void s485retdecFreeInstance(s485retdecInstance* instance);

#endif /* s485retdec_H */

