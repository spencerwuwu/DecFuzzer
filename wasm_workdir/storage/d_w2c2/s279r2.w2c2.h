#ifndef s279r2_H
#define s279r2_H

#include "w2c2_base.h"

typedef struct s279r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s279r2Instance;

void f0(s279r2Instance*);

void f1(s279r2Instance*);

U32 f2(s279r2Instance*);

void f3(s279r2Instance*,U32);

U32 f4(s279r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s279r2Instance*,U32,U32,U32,U32,U32);

void f6(s279r2Instance*,U32);

void f7(s279r2Instance*,U32,U32,U32);

void f8(s279r2Instance*,U32,U32,U32);

void s279r2____wasm_call_ctors(s279r2Instance*i);

void s279r2____wasm_apply_data_relocs(s279r2Instance*i);

U32 s279r2_func_1(s279r2Instance*i);

void s279r2_call_cb(s279r2Instance*i,U32 l0);

void s279r2Instantiate(s279r2Instance* instance, void* resolve(const char* module, const char* name));

void s279r2FreeInstance(s279r2Instance* instance);

#endif /* s279r2_H */

