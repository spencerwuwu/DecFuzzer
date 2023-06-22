#ifndef s384retdec_H
#define s384retdec_H

#include "w2c2_base.h"

typedef struct s384retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s384retdecInstance;

void f0(s384retdecInstance*);

void f1(s384retdecInstance*);

U32 f2(s384retdecInstance*);

void f3(s384retdecInstance*,U32);

U32 f4(s384retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s384retdecInstance*,U32,U32,U32,U32,U32);

void f6(s384retdecInstance*,U32);

void f7(s384retdecInstance*,U32,U32,U32);

void f8(s384retdecInstance*,U32,U32,U32);

void s384retdec____wasm_call_ctors(s384retdecInstance*i);

void s384retdec____wasm_apply_data_relocs(s384retdecInstance*i);

U32 s384retdec_func_1(s384retdecInstance*i);

void s384retdec_call_cb(s384retdecInstance*i,U32 l0);

void s384retdecInstantiate(s384retdecInstance* instance, void* resolve(const char* module, const char* name));

void s384retdecFreeInstance(s384retdecInstance* instance);

#endif /* s384retdec_H */

